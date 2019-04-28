/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A - Tanya and Stairways - https://codeforces.com/contest/1005/problem/A
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	int escadas =0;
	int a, ant, n, pos = 0, max[1000];

	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		if(a == 1){
			escadas++;
			if(i !=0){
				max[pos] = ant;
				pos++;
			}
		}
		if(i == n-1)
			max[pos] = a;
		ant = a;
	}
	printf("%d\n",escadas);
	for(int i = 0; i <= pos; i++){
		printf("%d", max[i]);
		if(i != pos)
			printf(" ");
	}
	printf("\n");

	return 0;
}