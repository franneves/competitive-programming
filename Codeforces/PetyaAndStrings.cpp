/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A - Petya and Strings - https://codeforces.com/contest/112/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin>>a>>b;
	int tam = a.size();
	for(int i = 0; i < tam; i++){
		if(isupper(a[i]))
			a[i] = a[i] + 32;
		if(isupper(b[i]))
			b[i] = b[i]+32;
		if(a[i] > b[i]){
			cout<<"1"<<endl;
			return 0;
		}else if(a[i] < b[i]){
			cout<<"-1"<<endl;
			return 0;
		}
	}
	cout<<"0"<<endl;
	return 0;
}