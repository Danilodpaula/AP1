//Faça um programa em C com três funções:
//-Função para solicitar do usuário um número real positivo no range [0,1].
//-Função arctan que recebe o número real x [0,1] e devolve uma aproximação do arco
//tangente de x (em radianos) através da série.
//incluindo todos os termos da série até
//- Função que imprima na tela uma mensagem com 
//o número real e o arco tangente do número em radianos.
//Utilizar as funções num programa. Nas funções e no programa deverão
//ser tratados todos os possíveis erros de entrada de dados.

//Danilo Silva de Paula

#include<stdio.h>
#include<math.h>

float pedenumero(){
    float num;
    do{
        printf("Digite um numero real positivo no range [0,1]: ");
        scanf("%f", &num);
        if(num > 0 && num < 1)
        return num;
        printf("Valor invalido. Digite um numero real positivo no range [0,1]: ");
    }
	 while (1);
} 

float arctan(float num){
    return atan(num);
}

void imprime(float num){
    printf("O arco tangente de %.2f e %.2f(em radianos)!\n", num, arctan(num));
    return;
}

int main(void){
    float num = pedenumero();
    imprime(num);
    return 0;
}

