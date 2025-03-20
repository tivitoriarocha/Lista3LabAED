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
    unsigned int codigoDisciplina;
    Status situacao;
} Aluno;

void mostrarAluno(Aluno *ptr) {
    printf("Informações do aluno\n-----------------------\nNome: %s, Código: %u, Situação: %d\n", ptr->nome, ptr->codigoDisciplina, ptr->situacao);
}

void mallocAluno() {
    int numAlunos;
    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);
    
    Aluno *alunos = (Aluno *)malloc(numAlunos * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    
    for (int i = 0; i < numAlunos; i++){
        printf("Digite o nome do aluno: ");
        getchar();
        fgets(alunos[i].nome,30,stdin);
        alunos[i].nome[strcspn(alunos[i].nome,"\n")] = '\0';
        //scanf("%s", alunos[i].nome);
        printf("Digite o código da disciplina: ");
        scanf("%u", &alunos[i].codigoDisciplina);
        if (alunos[i].codigoDisciplina<=0){
            printf("Entrada inválida!\nTente novamente\n");
            return;
        }
        printf("Digite a situação (0: Aprovado, 1: Trancado, 2: Reprovado): ");
        scanf("%d", (int*)&alunos[i].situacao);
        if (alunos[i].situacao!=0 && alunos[i].situacao!=1 && alunos[i].situacao!=2){
            printf("Entrada inválida!\nTente novamente\n");
            return;
        }
  
    }
    mostrarAluno(&alunos[0]);
    //printf("Nome: %s, Código: %u, Situação: %d\n", alunos[0].nome, alunos[0].codigoDisciplina,alunos[0].situacao);
    free(alunos);
}

int main(){

    mallocAluno();

return(0);
}
