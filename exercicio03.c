#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

// 3.Faça um programa que calcule a quantidade 
// necessária de latas de tinta para pintar uma parede. O programa 
// pergunta as medidas de largura e altura da parede em metros e 
// escreve quantas latas de tinta serão necessárias para pintá-la. 
// Considere que o consumo de tinta é de 300 ml por metro quadrado e a 
// quantidade de tinta por lata é de 2 litros.

#define PAINT_CAN_VOLUME_ML 2000
#define PAINT_VOLUME_PER_SQUARE_METER 300

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  const float wall_width = read_positive_float(
      "Digite a largura da parede(metros): ", 
      "Digite um valor válido para a largura."
    );
  const float wall_height = read_positive_float(
      "Digite a altura da parede(metros): ", 
      "Digite um valor válido para a altura."
    );

  const float total_area = wall_height * wall_width;
  const float used_paint_volume_ml = (float) total_area * PAINT_VOLUME_PER_SQUARE_METER;

  int paint_cans = used_paint_volume_ml / PAINT_CAN_VOLUME_ML;

  if ( ((int)used_paint_volume_ml % PAINT_CAN_VOLUME_ML) > 0) {
    paint_cans += 1;
  }
  
  clear_terminal();
  printf("O Total de latas de tinta é: %d\n", paint_cans);

  return EXIT_SUCCESS;
}