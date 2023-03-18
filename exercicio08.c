#include "utils.h"


// 8. Uma revendedora de carros usados paga a seus funcionários 
// vendedores um salário fixo por mês, mais uma comissão também 
// fixa para cada carro vendido e mais 5% do valor das vendas por 
// ele efetuadas. Escrever um algoritmo que leia o número de carros 
// por ele vendidos, o valor total de suas vendas, o salário fixo e o 
// valor que ele recebe por carro vendido. Calcule e escreva o salário 
// final do vendedor. 

#define SALES_COMMISSION_PERCENTUAL 0.05

int main() {
  setlocale(LC_ALL, "Portuguese");

  const int car_number = read_positive_integer(
    "Digite o número de carros vendidos: ", 
      "Insira um número de carros válido."
    );
  const float total_sales_value = read_positive_float(
    "Digite o valor total de vendas: ", 
      "Insira um total de vendas válido."
    );
  const float fixed_salary = read_positive_float(
    "Digite o valor do salário fixo: ", 
      "Insira um salário válido."
    );
  const float commission_per_car = read_percentual(
    "Digite o valor da comissão por carro: ", 
      "Insira uma comissão válida."
    );

  const float total_salary = fixed_salary + (car_number * commission_per_car) + (SALES_COMMISSION_PERCENTUAL * total_sales_value);
  clear_terminal();
  printf("O salário final é R$%.2f\n",total_salary);

  return EXIT_SUCCESS;
}