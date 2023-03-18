#include "utils.h"
#include <math.h>

#define PI 3.1415


// 2.Escreva um programa que pergunte qual o raio de um círculo e 
// imprima a sua área.

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  float circle_radius = read_positive_float(
      "Digite o raio do círculo: ", 
      "Digite um valor válido para o raio."
    );
  clear_terminal();
  float circle_area =  PI * (float) pow(circle_radius, 2.0);
  printf("A área do círculo é: %.2f\n", circle_area);

  return 0;
}