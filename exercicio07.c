#include "utils.h"
#include <stdio.h>

// 7. O custo de um carro novo ao consumidor é a soma do custo de 
// fábrica com a porcentagem do distribuidor e dos impostos 
// (aplicados ao custo de fábrica). Supondo que o percentual do 
// distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo 
// para ler o custo de fábrica de um carro, calcular e escrever o custo 
// final ao consumidor.

#define DISTRIBUTOR_PERCENTUAL 0.28
#define TAXES_PERCENTUAL 0.45

int main() {
  const int car_factory_cost = read_positive_integer(
      "Digite o custo de fábrica do carro: ", 
      "Digite um custo válido."
    );
  const int total_tax = car_factory_cost * TAXES_PERCENTUAL;
  const int distributor_cost = car_factory_cost * DISTRIBUTOR_PERCENTUAL;
  const int car_final_price = car_factory_cost + distributor_cost + total_tax;
  clear_terminal();
  printf("O custo final do carro é R$%d\n", car_final_price);
  return 0;
}