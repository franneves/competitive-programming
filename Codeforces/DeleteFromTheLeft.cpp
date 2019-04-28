/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - B. Delete from the Left - https://codeforces.com/contest/1005/problem/B
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	
	char stringA[200001], stringB[200001];
	scanf("%s%s", stringA, stringB);
	int tamA, tamB;
	tamA=strlen(stringA);
	tamB=strlen(stringB);
	int moves=0, aux = 0, achou = 0;
	if(tamA > tamB){
		moves = tamA-tamB;
		tamA= moves;
		for(int i = 0; i < tamB; i++){
			if(stringA[tamA] != stringB[i]){
				moves = moves+2;
				moves = moves+ aux;
				aux= 0;
			}else{
				aux = aux+2;
			
			}
			tamA++;	
		}
	}else if(tamB > tamA){
		moves = tamB-tamA;
		tamB = moves;
		for(int i = 0; i < tamA; i++){
			if(stringA[i] != stringB[tamB]){
				moves = moves+2;
				moves = moves+aux;
				aux = 0;
			}else{
				aux = aux+2;
			}
			tamB++;
		}
	}else{
		moves = 0;
		for(int i = 0;i <tamA; i++){
			if(stringA[i] !=stringB[i]){
				moves = moves+2;
				moves = moves+aux;
				aux = 0;
			}else{
				aux = aux+2;

			}
		}
	}
	printf("%d\n", moves);
	
	return 0;
}
