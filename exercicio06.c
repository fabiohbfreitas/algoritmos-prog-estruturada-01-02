#include "utils.h"
#include <stdio.h>

// 6. Escreva um algoritmo para ler o salário mensal atual de um 
// funcionário e o percentual de reajuste. Calcular e escrever o 
// valor do novo salário. 

int main() {
  const int salary = read_positive_integer(
      "Digite o valor do salário: ", 
      "Insira um valor de salário válido."
    );
  float salary_adjustment_percentual = 0.0;
  printf("Digite o valor do reajuste: ");
  scanf("%f", &salary_adjustment_percentual);

  const float salary_adjusted = salary * (1+salary_adjustment_percentual);
  printf("O salário reajustado é R$%.2f\n", salary_adjusted);
  return 0;
}