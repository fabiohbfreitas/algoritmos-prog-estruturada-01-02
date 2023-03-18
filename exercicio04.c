#include "utils.h"


// 4. Escreva um algoritmo para ler as dimensões de um 
// retângulo (base e altura), calcular e escrever a área do retângulo. 


int main() {
  setlocale(LC_ALL, "Portuguese");

  const float rect_width = read_positive_float(
      "Digite o valor da base do retângulo: ", 
      "Insira um valor válido para a base do retângulo."
    );
  const float rect_height = read_positive_float(
      "Digite o valor da altura do retângulo: ", 
      "Insira um valor válido para a altura do retângulo."
    );
  clear_terminal();
  const float rect_area = rect_height * rect_width;
  printf("A área do retângulo é %.2f\n", rect_area);

  return EXIT_SUCCESS;
}