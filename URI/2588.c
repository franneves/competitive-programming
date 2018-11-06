//PA rodada 02 - Jogo dos Palíndromos
//Aluna: Francielly das Neves Lafaete - 2017023382
#include <stdio.h>
#include <string.h>
//busca quantas vezes uma letra aparece na palavra
int busca(char palavra[999], int tamanho, char c){
  int i, cont =0;
  for(i = 0; i <tamanho; i++ ){
    if(c == palavra[i]){
      cont++;
     //as letras ja contadas sao substituidas por -1 para evitar serem contadas novamente
      palavra[i] = -1;
    }
  }
  return cont;
}

int main(){
  char palavra[999];
  int tamanho;
  int i, aux, result, impar;
  while(1){
    if (scanf ("%s",palavra) == EOF) break;
    tamanho = strlen(palavra);
    impar = 0;
    result = 0;
    for(i = 0; i < tamanho; i++){
      if(palavra[i]!= -1){
        aux = busca(palavra, tamanho, palavra[i]);
        if(aux%2 == 1){
        
          if(impar == 1)
            //ja teve ocorrencia impar anteriormente
            //entao atual tem de ser par, adicionar mais uma letra
            result++;
        else
          //nunca teve ocorrencia impar anteriormente
          impar = 1;
        }
      }
    }
    printf("%d\n", result);
  }
  return 0;
}