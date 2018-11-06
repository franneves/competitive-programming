#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//********************************** Dijkstra para a resoluçao do problema********************************///
int minDistance(int *dist, int *visitado, int V){
  int min = INT_MAX, min_index, i;
  for (i = 0; i < V; i++)
     if (visitado[i] == 0 && dist[i] <= min)
         min = dist[i], min_index = i;
   return min_index;
}
void resposta(int *dist, int V){
  if(dist[V-1] >= INT_MAX)
    printf("-1\n");
  else
    printf("%d\n", dist[V-1]);
}
void dijkstra(int **graph, int src, int V){
     int dist[V];     
     int visitado[V];
     for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, visitado[i] = 0;
 
      dist[src] = 0;
  
     for (int count = 0; count < V-1; count++){
        int u = minDistance(dist, visitado,  V);
        visitado[u] = 1;
        for (int v = 0; v < V; v++)
          if (!visitado[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
     }
     resposta(dist, V);
}
//********************************** Estrutura para o tipo Grafo********************************///

struct grafo{
    int nvert; //numero de vertices do Grafo
  struct List* vetoradj;//vetor de adjacencias
};
typedef struct grafo Grafo;

struct Node {
  int id;
  int peso;
  struct Node* next;
};

 struct List {
    struct Node *head; 
};

 struct Node* newNode(int id, int peso) {
    //Cria um novo No
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->id = id;
    newNode->peso = peso;
    newNode->next = NULL;
    return newNode;
 }

Grafo* criaGrafo(int nvert){
    Grafo *gr;
    int i;
    gr = (Grafo*)malloc(sizeof(struct grafo));
    // controi um vetor de tamanho nvert, inicio da lista de adjacentes
    gr->nvert = nvert;
    gr->vetoradj = (struct List*)malloc(nvert * sizeof(struct List));
    //inicializando
    for (i = 0; i < gr->nvert; ++i)
      gr->vetoradj[i].head = NULL;
    return gr;
}


void criaAresta(Grafo* gr, int a, int b, int peso) {
    struct Node* novoNode = newNode(b, peso);
    novoNode->next = gr->vetoradj[a].head;
    gr->vetoradj[a].head = novoNode;
     novoNode = newNode(a, peso);
    novoNode->next = gr->vetoradj[b].head;
    gr->vetoradj[b].head = novoNode;
}
 
void removergrafo(Grafo *gr, int n){
    int i;
    for(i = 0; i < n; i++){
      struct Node* aux = gr->vetoradj[i].head;
      while(aux){
          struct Node *del = aux;
          aux = aux->next;
          free(del);
      }
    }
    free(gr->vetoradj);
    free(gr);
    
}

int main(){

  int i,j, V, E, a, b, peso;
  Grafo* gr;
  scanf("%d%d", &V,&E);
 
  gr = criaGrafo(V);
  
  for(j = 0; j < E; j++){
    scanf("%d%d%d", &a, &b, &peso);
    criaAresta(gr,a-1, b-1, peso);
  }

  //criar um grafo auxiliar
  int **gr2;
  gr2=(int**)calloc(V, sizeof(int*));
  for(i = 0; i < V; i++)
    gr2[i] = (int*)calloc(V, sizeof(int));
    
  for(j = 0; j < V; j++){
    struct Node* aux = gr->vetoradj[j].head;
    while(aux){
      struct Node* aux2 = gr->vetoradj[aux->id].head;
      while(aux2){
        if(!gr2[j][aux2->id] && !gr2[aux2->id][j] ){
         gr2[j][aux2->id] = aux->peso+aux2->peso;
         gr2[aux2->id][j] = aux->peso+aux2->peso;
        }else if(gr2[j][aux2->id]  > aux->peso+aux2->peso){
           gr2[j][aux2->id] = aux->peso+aux2->peso;
          gr2[aux2->id][j] = aux->peso+aux2->peso;

        }
        aux2 = aux2->next;
      }
      aux = aux->next;
    }
  }
    removergrafo(gr, V);
    dijkstra(gr2, 0, V);
    return 0;
}
