/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A. Word - https://codeforces.com/contest/59/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int grande = 0, pequeno = 0;
  string aux;
  cin>>aux;
  int tam = aux.size();
 
  for(int i = 0; i < tam; i++) {
    if( aux[i] >= 'a' && aux[i]<='z')
      pequeno++;
    else
      grande++;
  }

  if(grande > pequeno) {
    for(int i = 0; i < tam; i++)
      if( aux[i] >= 'a' && aux[i]<='z')
        aux[i] = toupper(aux[i]); 

  }else{
    for(int i = 0; i < tam; i++)
      if( aux[i] < 'a' || aux[i]>'z'){
        aux[i] =tolower(aux[i]);
      }
  }

  cout<<aux;
  return 0;

}