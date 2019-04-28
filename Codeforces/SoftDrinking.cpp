/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces -A - Soft Drinking - https://codeforces.com/contest/151/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a, b, totalml;
	cin>>a>>b;
	totalml = a*b;
	int  totalf;
	cin>>a>>b;
	totalf = a*b;
	int p;
	cin>>p;
	int nml, nsal;
	cin>>nml>>nsal;
	nml = nml*n;
	nsal = nsal*n;
	int brindes=10000;
	brindes = min(totalml/nml,p/nsal);
	brindes = min(brindes, totalf/n);
	cout<<brindes<<endl;
	return 0;

}