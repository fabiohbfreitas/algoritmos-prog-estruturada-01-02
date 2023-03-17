#include "utils.h"
#include <stdio.h>

// 2.Faça um programa que calcule a quantidade 
// necessária de latas de tinta para pintar uma parede. O programa 
// pergunta as medidas de largura e altura da parede em metros e 
// escreve quantas latas de tinta serão necessárias para pintá-la. 
// Considere que o consumo de tinta é de 300 ml por metro quadrado e a 
// quantidade de tinta por lata é de 2 litros.

#define PAINT_CAN_VOLUME_ML 2000
#define PAINT_VOLUME_PER_SQUARE_METER 300

int main() {
  const int wall_width =read_positive_integer(
      "Digite a largura da parede(metros): ", 
      "Digite um valor válido para a largura."
    );
  const int wall_height =read_positive_integer(
      "Digite a altura da parede(metros): ", 
      "Digite um valor válido para a altura."
    );

  const int total_area = wall_height * wall_width;
  const float used_paint_volume_ml = (float) total_area * PAINT_VOLUME_PER_SQUARE_METER;
  int paint_cans = used_paint_volume_ml / PAINT_CAN_VOLUME_ML;
  if ( ((int)used_paint_volume_ml % PAINT_CAN_VOLUME_ML) > 0) {
    paint_cans += 1;
  }
  printf("O Total de latas de tinta é: %d\n", paint_cans);

  return 0;
}