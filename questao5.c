//5º Construa um vetor dinâmico de alunos. O registro aluno deve ser composto por nome (ou matrícula), código da disciplina 
//(número inteiro sem sinal), e situação da disciplina. A situação da disciplina deve ser uma enumeração com os valores: 
//Aprovado, Trancado, Reprovado. Peça ao usuário para digitar o número de alunos do vetor e em seguida leia os dados do primeiro aluno. 
//Para finalizar mostre os dados do primeiro aluno usando uma função que recebe um ponteiro para aluno.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { Aprovado, Trancado, Reprovado } Status;

typedef struct {
    char nome[30];
    unsigned int codigo;
    Status situacao;
} Aluno;

void mostrar_aluno(Aluno *a) {
    printf("Nome: %s, Código: %u, Situação: %d\n", a->nome, a->codigo, a->situacao);
}

void exercicio5() {
    int n;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    
    Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    
    printf("Digite o nome do primeiro aluno: ");
    scanf("%s", alunos[0].nome);
    printf("Digite o código da disciplina: ");
    scanf("%u", &alunos[0].codigo);
    printf("Digite a situação (0: Aprovado, 1: Trancado, 2: Reprovado): ");
    scanf("%d", (int*)&alunos[0].situacao);
    
    mostrar_aluno(&alunos[0]);
    free(alunos);
}
