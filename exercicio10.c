#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int a_value = read_integer("Digite o valor do coeficiente a: ", 1, "O valor de a não pode ser zero.");
  int b_value = read_integer("Digite o valor do coeficiente b: ", 0, "");
  int c_value = read_integer("Digite o valor do coeficiente c: ", 0, "");
  
  clear_terminal();
  double discriminant = (b_value * b_value) - (4 * a_value * c_value);
  float result[2];
  
  if (discriminant < 0) {

    printf("A equação não possui soluções no conjunto dos números reais.\n");

  } else if (discriminant == 0) {

    result[0] = ((float) (-1 * b_value)) / (2 * a_value);
    printf("A equação possui apenas uma solução: %.2f\n", result[0]);

  } else {

    result[0] = ((-1 * b_value) + (float) sqrt(discriminant)) / (2 * a_value);
    result[1] = ((-1 * b_value) - (float) sqrt(discriminant)) / (2 * a_value);
    printf("A equação possui duas soluções: %.2f e %.2f\n", result[0], result[1]);
    
  }

  return EXIT_SUCCESS;
}