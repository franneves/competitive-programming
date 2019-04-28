/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - A Beautiful Matrix - https://codeforces.com/contest/263/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

  int aux, a, b;

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      cin>>aux;
      if(aux != 0) {
        a = i;
        b = j;
      }
    }
  }
  
  int move = 0;
  move = abs(a-2) + abs(b-2);
  cout<<move<<endl;

  return 0;

}