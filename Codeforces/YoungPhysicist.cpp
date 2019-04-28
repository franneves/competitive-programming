/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A. Young Physicist - https://codeforces.com/contest/69/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, aux;
  cin>>n;
  int soma[3];
  soma[0] = 0;
  soma[1] = 0;
  soma[2] = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < 3; j++){
      cin>>aux;
      soma[j] = soma[j] +aux;
    }
  }
  aux= 0;
  for(int i = 0; i < 3; i++)
    if(soma[i] != 0)
      aux = 1;
  if(aux == 1)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;

  return 0;
