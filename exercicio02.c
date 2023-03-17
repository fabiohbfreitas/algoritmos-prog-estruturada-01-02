#include "utils.h"
#include <stdio.h>

#define PI 3.1415


// 2.Escreva um programa que pergunte qual o raio de um círculo e 
// imprima a sua área.

int main() {
  int circle_radius = read_positive_integer(
      "Digite o raio do círculo: ", 
      "Digite um valor válido para o raio."
    );
  float circle_area = (float) 2 * PI * (float) circle_radius;
  printf("O Raio do círculo é: %.2f\n", circle_area);

  return 0;
}