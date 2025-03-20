#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Exercício 7: Ponteiro e alocação dinâmica de um inteiro
void exercicio7() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    
    *ptr = 100;
    printf("Valor armazenado: %d\n", *ptr);
    printf("Digite um novo valor: ");
    scanf("%d", ptr);
    printf("Novo valor: %d\n", *ptr);
    free(ptr);
}
