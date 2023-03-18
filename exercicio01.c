#include "utils.h"
#include <locale.h>

// 1.Faça um programa em que o usuário digite o custo de uma determinada 
//  mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas 
//  eventuais (também solicitadas pelo teclado). Para concluir, o programa 
//  pergunta qual o valor de venda e indica a percentagem de lucro da 
//  mercadoria.


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int product_cost = read_positive_integer(
        "Digite o custo do produto: ", 
        "O custo deve ser um preço válido.\n"
        );

    int shipping_cost = read_positive_integer(
        "Digite o custo do frete: ", 
        "O custo deve ser um preço válido."
        );

    int other_cost = read_positive_integer(
        "Digite o preço de outros custos: ", 
        "O custo deve ser um preço válido."
    );

    int selling_price = read_positive_integer(
        "Digite o preço de venda: ", 
        "Digite um preço válido."
    );

    int total_cost = product_cost + shipping_cost + other_cost;
    int profit = selling_price - total_cost;
    float profit_margin = ((float) profit) / ((float) selling_price);
    
    clear_terminal();
    printf("Lucro: %d | Margen de Lucro: %.2f%%\n", profit, profit_margin * 100);

    return 0;
}

