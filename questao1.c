//1º Crie um programa que peça ao usuário para digitar o número de alunos em uma turma. 
//O programa deve usar essa informação para criar um vetor dinâmico que armazene as notas finais desses alunos. 
//Peça ao usuário para entrar com a nota de dois alunos e em seguida mostre essas notas usando cout.

// Como cout é uma função específica do C++, não vou usar...

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibirNota() {
    int numAluno;
    printf("Digite o número de alunos (mínimo 2): ");
    scanf("%d", &numAluno);
    if (numAluno<2){
        printf("Número de alunos inválido!");
        return;
    }
    
    
    float *notas = (float *)malloc(numAluno * sizeof(float));
    if (notas == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    
    printf("Digite a nota do aluno 1: ");
    scanf("%f", &notas[0]);
    printf("Digite a nota do aluno 2: ");
    scanf("%f", &notas[1]);
    
    printf("Notas digitadas: %.2f e %.2f\n", notas[0], notas[1]);
    free(notas);
}

int main(){

    exibirNota();

return(0);
}
