#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int n1, item, desc;
    float precos[10] = {4.50, 6.20, 5.00, 12.90, 3.80, 7.50, 8.20, 4.00, 3.00, 5.50};
    float valor = 0;
    SetConsoleOutputCP(CP_UTF8);
   
    printf("\n[1] Voce quer iniciar uma compra?\n");
    printf("[2] Sair\n");
    scanf("%d", &n1);

    if(n1==2) {
        return 0;
    }

    while (n1 == 1) {
        printf("01 - Banana - R$4.50\n"
               "02 - Maçã - R$ 6.20\n"
               "03 - Laranja - R$ 5.00\n"
               "04 - Uva - R$ 12.90\n"
               "05 - Melancia - R$ 3.80\n"
               "06 - Abacaxi - R$ 7.50\n"
               "07 - Tomate - R$ 8.20\n"
               "08 - Cenoura - R$ 4.00\n"
               "09 - Alface - R$ 3.00\n"
               "10 - Batata - R$ 5.50\n");

        printf("Você quer mais algum item?\n");
        printf("[1] Adicionar item\n");
        printf("[2] Continuar\n");
        printf("Escolha: ");
        scanf("%d", &n1);

        if (n1 == 2) {
            break; 
        }

        printf("Digite o número do item que deseja adicionar: ");
        scanf("%d", &item);

        valor += precos[item - 1];
    }

    printf("Total da compra: R$ %.2f\n", valor);

    printf("Qual a forma de pagamento?\n"
           "1 - À Vista em Dinheiro ou Pix, recebe 15%% de desconto\n"
           "2 - À Vista no cartão de crédito, recebe 10%% de desconto\n"
           "3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros\n"
           "4 - Parcelado no cartão em três vezes ou mais, preço normal do produto mais juros de 10%%\n");
    
    scanf("%d",&desc);

    if(desc == 1){
        valor = valor - (valor * 15 / 100);
    } else if (desc == 2){
        valor = valor - (valor * 10 / 100);
    } else if(desc == 3){
        
    } else if(desc == 4){
        valor = valor + (valor * 10 / 100); 
    }

    printf("Valor final a pagar: R$ %.2f\n", valor);

    return 0;   
}