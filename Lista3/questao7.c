// 7º Declare um ponteiro para inteiro, aloque memória dinamicamente para ele e armazene o número 100 nessa memória. 
// Mostre o conteúdo apontado. Peça que o usuário digite um novo número inteiro e armazene-o na memória previamente alocada. 
// Libere o espaço alocado dinamicamente ao final do programa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mallocNumerico() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    
    *ptr = 100;
    printf("Conteúdo armazenado: %d\n", *ptr);
    printf("Digite um novo valor: ");
    scanf("%d", ptr);
    printf("Novo valor: %d\n", *ptr);
    free(ptr);
}

int main(){

    mallocNumerico();

return(0);
}
