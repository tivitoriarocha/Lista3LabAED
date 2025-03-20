#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Exercício 8: Vetor dinâmico de inteiros
void exercicio8() {
    int n;
    printf("Digite quantos inteiros armazenar: ");
    scanf("%d", &n);
    
    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("Valores armazenados: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    free(vetor);
}