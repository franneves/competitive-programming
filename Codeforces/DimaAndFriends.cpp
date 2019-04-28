/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces -A - Dima and Friends - https://codeforces.com/contest/272/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, num= 0, aux, res = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>aux;
		num = num+ aux;
	}
	n++;
	for(int i = 1; i < 6; i++){
		if((i+num)%n != 1)
			res++;
	}
	
	cout<<res<<endl;
	return 0;
}