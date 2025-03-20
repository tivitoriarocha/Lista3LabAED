// 10º Defina um registro ASCII que armazena um caractere e um valor inteiro associado. 
// Crie uma função que recebe um valor inteiro e um caractere, e retorna o endereço de um elemento do tipo ASCII, 
// alocado dinamicamente na memória. O programa principal deve chamar a função passando valores lidos do usuário, 
// receber o retorno em um ponteiro, exibir os valores de retorno e deletar a memória que foi alocada dentro da função.
// Dica: funções que retornam memória alocada são perigosas. É fácil esquecer de guardar o endereço de retorno para dar o delete.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char caractere;
    int valor;
} ASCII;


ASCII* criarASCII(char c, int v) {
    ASCII *elemento = (ASCII *)malloc(sizeof(ASCII));
    
    if (elemento == NULL) {
        printf("Erro ao alocar memória!\n");
        return NULL;
    }
    elemento->caractere = c;
    elemento->valor = v;
    return elemento;
}

int main() {
    char caractere;
    int valor;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); 
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    ASCII *elemento = criarASCII(caractere, valor);
    if (elemento == NULL) {
        return 1; 
    }
    printf("\nElemento ASCII criado:\n");
    printf("Caractere: %c\n", elemento->caractere);
    printf("Valor: %d\n", elemento->valor);

    free(elemento);

return (0);
}