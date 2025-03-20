//4º Repita o exercício anterior criando um vetor dinâmico de carros. Ao invés de inicializar o vetor com valores predefinidos, 
//peça ao usuário para digitar os dados de dois carros. Use uma função para receber o vetor de carros e exibir o valor total dos carros.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char modelo[20];
    int ano;
    float preco;
} carro;

void mallocCarroEpreco() {
    float precoTotal;
    carro *entradas = (carro *)malloc(2*sizeof(carro));
    
    if (entradas == NULL) {
        printf("Erro ao alocar memória!\n");
    }

    for (int i = 0; i < 2; i++){

        printf("Digite o modelo do carro: ");
        getchar();
        fgets(entradas[i].modelo,20,stdin);
        entradas[i].modelo[strcspn(entradas[i].modelo,"\n")] = '\0';
        //scanf("%19s", &entradas->modelo);
     
        do{
            printf("Digite o ano do carro: ");
            scanf("%d", &entradas[i].ano);
            //Ano de fabricação do primeiro carro patenteado
            if (entradas[i].ano<=1886){
                printf("Entrada inválida!\nTente novamente\n");
            }
        }while (entradas[i].ano<=1886);
     
        do{
            printf("Digite o preço do carro: ");
            scanf("%f", &entradas[i].preco);
            if (entradas[i].preco<=0){
                printf("Entrada inválida!\nTente novamente\n");
            }
        }while (entradas[i].preco<=0);
        precoTotal += entradas[i].preco; 
        printf("\nInformações do Carro\n-----------------------\nModelo: %s\nAno: %d\nPreço: R$%.2f\n\n", entradas[i].modelo, entradas[i].ano, entradas[i].preco);
    }

    free(entradas);
    printf("O preço total é: R$%.2f",precoTotal);
}

int main(){

    mallocCarroEpreco();

return(0);
}
