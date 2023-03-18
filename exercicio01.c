#include "utils.h"
#include <locale.h>
#include <stdlib.h>

// 1.Faça um programa em que o usuário digite o custo de uma determinada 
//  mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas 
//  eventuais (também solicitadas pelo teclado). Para concluir, o programa 
//  pergunta qual o valor de venda e indica a percentagem de lucro da 
//  mercadoria.


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    const int product_cost = read_positive_float(
        "Digite o custo do produto: ", 
        "O custo deve ser um preço válido.\n"
        );

    const int shipping_cost = read_positive_float(
        "Digite o custo do frete: ", 
        "O custo deve ser um preço válido."
        );

    const int other_cost = read_positive_float(
        "Digite o preço de outros custos: ", 
        "O custo deve ser um preço válido."
    );

    const int selling_price = read_positive_float(
        "Digite o preço de venda: ", 
        "Digite um preço válido."
    );

    const float total_cost = product_cost + shipping_cost + other_cost;
    const float profit = selling_price - total_cost;
    const float profit_margin = ((float) profit) / ((float) selling_price);
    
    clear_terminal();
    printf("Lucro: R$%.2f | Margen de Lucro: %.2f%%\n", profit, profit_margin * 100);

    return EXIT_SUCCESS;
}

