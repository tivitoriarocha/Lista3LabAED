// 8º Inicie o programa perguntando ao usuário quantos inteiros ele deseja armazenar em um vetor. 
// Use a informação digitada para criar um vetor dinâmico com o espaço necessário para armazenar a quantidade de inteiros desejada. 
// Depois disso, deixe que o próprio usuário preencha o vetor, utilizando o tamanho do vetor como condição de parada de um laço for. 
// Mostre o vetor que foi preenchido através de outro laço e libere o espaço alocado dinamicamente ao final do programa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mallocInteiro() {
    int num;
    printf("Quantos inteiros deseja armazenar? ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Número inválido!\nDigite um valor maior que 0\n");
        return;
    }

    int *vetor = (int *)malloc(num * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    for (int i = 0; i < num; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("Valores armazenados: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);
}

int main() {

    mallocInteiro();

return (0);
}