//2º Defina o registro balao como mostrado abaixo. Construa um programa para alocar dinamicamente uma variável do tipo balao. 
//Peça ao usuário para entrar com valores para cada um dos membros e em seguida exiba o conteúdo do registro.
//Em seguida mostre:
//a) Como criar uma variável de tipo peixe
//b) Como alocar dinamicamente um registro de tipo peixe.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    float diametro; // diâmetro
    char marca[20]; // nome da marca
    int modelo;     // número do modelo
} balao;

void mallocBalao() {
    balao *entradas = (balao *)malloc(sizeof(balao));
    if (entradas == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    
    do{
        printf("Digite o diâmetro do balão: ");
        scanf("%f", &entradas->diametro);
        if (entradas->diametro<=0){
        printf("Entrada inválida!\nTente novamente\n");
    }
    } while (entradas->diametro<=0);

    printf("Digite a marca do balão: ");
    //limitando a quatidade de caracteres lidos para não dar bug...
    scanf("%19s", entradas->marca);

    do{
        printf("Digite o modelo do balão: ");
        scanf("%d", &entradas->modelo);
        if (entradas->modelo<=0){
            printf("Entrada inválida!\nTente novamente\n");
        }
    } while (entradas->modelo<=0);

    printf("\nInformações do Balão \n-----------------------\n Diâmetro: %.2f\n Marca: %s\n Modelo: %d\n", entradas->diametro, entradas->marca, entradas->modelo);
    free(entradas);
}

//a) Como criar uma variável de tipo peixe
typedef struct {
    float peso;
    char tipo[30];
    int comprimento;
} peixe;

//b) Como alocar dinamicamente um registro de tipo peixe.
void mallocPeixe() {
    peixe *pescaria = (peixe *)malloc(sizeof(peixe));
    if (pescaria == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    
    do{
        printf("Digite o peso do peixe: ");
        scanf("%f", &pescaria->peso);
        if (pescaria->peso<=0){
        printf("Entrada inválida!\nTente novamente\n");
    }
    } while (pescaria->peso<=0);

    printf("Digite a tipo do peixe: ");
    //limitando a quatidade de caracteres lidos para não dar bug...
    scanf("%29s", pescaria->tipo);

    do{
        printf("Digite o comprimento do peixe: ");
        scanf("%d", &pescaria->comprimento);
        if (pescaria->comprimento<=0){
            printf("Entrada inválida!\nTente novamente\n");
        }
    } while (pescaria->comprimento<=0);

    printf("\nInformações do Peixe \n-----------------------\n Peso: %.2f\n Tipo: %s\n Comprimento: %d", pescaria->peso, pescaria->tipo, pescaria->comprimento);
    free(pescaria);
}

int main(){

    mallocBalao();

    mallocPeixe();
    
return(0);
}
//Ainda daria para melhorar colocando uma função só para exibir, por exemplo.