/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A - HQ9+ - https://codeforces.com/contest/133/problem/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	string palavra;
	cin>>palavra;
	int tam = palavra.size();
	for(int i = 0; i < tam; i++){
		if(palavra[i]== 'H'||palavra[i]=='Q'||palavra[i]=='9'){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}