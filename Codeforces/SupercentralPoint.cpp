/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A - Supercentral Point - https://codeforces.com/contest/165/problem/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n, res = 0, aux1, aux2;
	cin>>n;
	pair<int,int>  pontos[n];
	for(int i = 0; i<n;i++){
		cin>>aux1;
		cin>>aux2;
		pontos[i] = make_pair(aux1, aux2);
	}
	for(int i = 0; i < n; i++){
		int a = 0, b=0, c=0, d=0;
		for(int j = 0; j<n; j++){
			if(i!= j &&pontos[i].first ==pontos[j].first){
				if(pontos[i].second>pontos[j].second){
					a = 1;
				}else if (pontos[i].second<pontos[j].second){
					b =1;
				}

			}else if(i!= j && pontos[i].second == pontos[j].second){
				if(pontos[i].first > pontos[j].first){
					c = 1;
				}else if (pontos[i].first <pontos[j].first){
					d =1;
				}

			}

		}
		if(a == 1 && b== 1 && c == 1 && d ==1)
			res++;

	}
	cout<<res<<endl;
	return 0;
}