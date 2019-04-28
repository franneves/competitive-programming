/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A - Bit++ - https://codeforces.com/contest/282/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x = 0;
	string a;
	for(int i = 0; i < n; i++) {
		cin>>a;
		if(a[1] == '+')
			x++;
		else
			x--;
	}

	cout<<x<<endl;
	return 0;

}