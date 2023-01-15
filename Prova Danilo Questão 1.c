//Faça um programa que leia as notas finais de vários alunos de uma turma 
//e mostre a maior nota, a menor nota e a média aritmética simples das notas da turma. 
//O programa pára quando encontrar uma nota negativa.

//Danilo Silva de Paula

#include <stdio.h>

int main(){
	
	int alunos;
	float nota;
	float media_arit;
	float nota_max = -1000;
	float nota_min = 1000;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &alunos);
	
	for(int i=0;i<alunos;i++){
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &nota);
		
		if(nota>nota_max){
			nota_max = nota;
		}
		
		if(nota<nota_min){
			nota_min = nota;
		}
		
		if(nota < 0){
			break;
		}
		
		media_arit += nota;
	}
	
	printf("A maior nota foi: %.2f\n", nota_max);
	printf("A menor nota foi: %.2f\n", nota_min);
	printf("A media foi: %.2f\n", media_arit/alunos);
}