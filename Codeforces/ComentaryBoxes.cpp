/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces -A - Commentary Boxes - https://codeforces.com/contest/990/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long unsigned int n, m, build, demolish;
	
	cin>>n>>m>>demolish>>build;
	if(n%m == 0)
		cout<<'0'<<endl;
	else{
		long long unsigned int aux = 0;
		aux = n%m;
		aux = min((aux*build), ((m-aux)*demolish));
		cout<<aux<<endl;
	}

	
	return 0;
}