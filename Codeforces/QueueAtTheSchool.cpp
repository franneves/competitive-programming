/*Universidade Federal de Minas Gerais
* Francielly das Neves Lafaete - Programação competitiva
* CodeForces - B. Queue At The School
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  int num, time;
  cin>>num;
  cin>>time;
  char aux;
  int fila[num];
  for(int i = 0; i < num; i++){
    cin>>aux;
    if(aux == 'G')
      fila[i] = 1;
    else
      fila[i] = 0;
  }

  for(int i = 0; i < time;  i++){
    for(int j = 0; j < num-1; j++){
      if(fila[j] == 0 && fila[j+1] == 1){
        fila[j]++;
        fila[j+1]--;
        j = j+1;
      }
    }
  }

for(int i =0; i < num; i++){
  if(fila[i] == 1)
    cout<<'G';
  else
    cout<<'B';
}
  cout<<endl;



  return 0;

}