// 9° Crie um registro "Local" com os campos nome, país e continente. Pergunte ao usuário quantos locais 
// ele quer visitar nas próximas férias e crie um vetor de locais alocando dinamicamente o espaço de 
// acordo com quantos locais ele quer visitar. Use um laço for para armazenar as informações dos locais 
// que o usuário deseja visitar, e depois do armazenamento mostre os locais que ele escolheu. 
// Libere o espaço alocado dinamicamente ao final do programa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    char pais[15];
    char continente[40];
}Local;

void mallocLugar(){
    int num;
    printf("Quantos locais deseja visitar? ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Número inválido!\nDigite um valor maior que 0\n");
        return;
    }

    Local *vetor = (Local *)malloc(num * sizeof(Local));
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    for (int i = 0; i < num; i++){
        printf("informações do %d ambiente \n", i + 1);
        printf("Digite o nome do lugar: ");
        getchar(); 
        fgets(vetor[i].nome, 30, stdin);
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0'; 
        //scanf("%s", vetor[i].nome);

        printf("Digite o país: ");
        fgets(vetor[i].pais, 15, stdin);
        vetor[i].pais[strcspn(vetor[i].pais, "\n")] = '\0'; 
        //scanf("%s", vetor[i].pais);
        
        printf("Digite o continente: ");
        fgets(vetor[i].continente, 40, stdin);
        vetor[i].continente[strcspn(vetor[i].continente, "\n")] = '\0'; 
        //scanf("%s", vetor[i].continente);
    }
    
    printf("Informações coletadas\n-----------------------\n");

    for (int i = 0; i < num; i++){
        printf("\nLocal %d:\n", i + 1);
        printf("Nome: %s\n", vetor[i].nome);
        printf("País: %s\n", vetor[i].pais);
        printf("Continente: %s\n", vetor[i].continente);
    }
    
    free(vetor);
    
}

int main(){

    mallocLugar();

return(0); 
}