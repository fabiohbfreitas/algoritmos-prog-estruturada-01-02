#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

// 5. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, 
// meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
// Considerar ano com 365 dias e mês com 30 dias. 

#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30

int main() {
  setlocale(LC_ALL, "Portuguese");

  const int age_years = read_positive_integer(
    "Digite a quantidade de anos: ", 
      "Insira uma quantidade de anos válida."
    );
  const int age_months = read_positive_integer(
    "Digite a quantidade de meses: ", 
      "Insira uma quantidade de meses válida."
    );
  const int age_days = read_positive_integer(
    "Digite a quantidade de dias: ", 
      "Insira uma quantidade de dias válida."
    );

  clear_terminal();
  const int total_age_in_days = age_years * DAYS_IN_YEAR + age_months * DAYS_IN_MONTH + age_days;
  printf("A idade em dias é %d.\n", total_age_in_days);

  return EXIT_SUCCESS;
}