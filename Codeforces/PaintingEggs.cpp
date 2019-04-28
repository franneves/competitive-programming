/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - B - Painting Eggs - https://codeforces.com/contest/282/problem/B
*/

#include <iostream>
#include <bits/stdc++.h>
#include <stdint.h>
#include <vector>
using namespace std;

int main(){
	uint64_t n;
	int  diff = 0; 
	cin>>n;

	string res;
	for(int i = 0; i < n; i++) {
		int a, g;
		cin>>a>>g;
		if(diff + a <=  500) {
			diff +=  a;
			res +='A';
		}else{
			diff -= g;
			res+='G';
			
		}
	}
	cout<<res<<endl;
	
	return 0;
}