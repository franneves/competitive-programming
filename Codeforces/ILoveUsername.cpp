/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A - I_love_\%username\% - https://codeforces.com/contest/155/problem/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n, max, min, aux, res = 0; 
	cin>>n;

	cin>>aux;
	min = aux;
	max = aux;
	for(int i = 1; i < n; i++){
		cin>>aux;
		if(aux > max){
			max = aux;
			res++;
		}else if(aux < min){
			min = aux;
			res++;
		}
		
	}
	cout<<res<<endl;
	return 0;
}