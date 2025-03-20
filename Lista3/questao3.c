//3º Construa um registro para guardar informações sobre um carro. Um carro deve ter um modelo, ano de fabricação e preço. 
//Em seguida construa um vetor estático de 10 carros inicializando os dois primeiros carros respectivamente para 
//"Vectra", 2009, R$58.000,00 e "Polo", 2008, R$45.000,00. Use um ponteiro para apontar para o segundo carro e exibir seus dados.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char modelo[20];
    int ano;
    float preco;
} carro;

void gettingCarro() {
    carro veiculo[10] = { {"Vectra", 2009, 58000}, {"Polo", 2008, 45000} };
    carro *ptr = &veiculo[1];
    
    printf("\nInformações do Carro\n-----------------------\nModelo: %s\nAno: %d\nPreço: R$%.2f\n", ptr->modelo, ptr->ano, ptr->preco);
}

int main(){

    gettingCarro();

return(0);
}
