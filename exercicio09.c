#include "utils.h"
#include <stdio.h>

// 9. Faça um algoritmo que leia três notas de um aluno, 
// calcule e escreva a média final deste aluno. Considerar que 
// a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula 
// para o cálculo da média final é: mf = (n1*2 + n2*3 + n3*5)/(2+3+5)



int main() {
  const int grades_weight[3] = {2, 3, 5};

  int partial_final_grade = 0;
  int partial_weight = 0;
  for (int i = 0; i < 3 ; i += 1)
  {
    char prompt[32];
    sprintf(prompt, "Digite a nota %d: ", i + 1);
    const int nth_grade = read_positive_integer(
      prompt, 
      "Digite uma nota válida."
    );
    const int current_weight = grades_weight[i];
    partial_weight += current_weight;
    partial_final_grade += current_weight * nth_grade;
  }
  const float final_grade = (float) partial_final_grade / partial_weight;
  clear_terminal();
  printf("A nota final é: %.2f\n", final_grade);

  return 0;
}