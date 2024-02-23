#include <bits/stdc++.h>

using namespace std;



class Graph{
int V; //Numero de vertices
list<int> *l; //Lista de listas
public: 
    Graph(int v){
          V=v; //Declara vertices
    l=new list<int>[V]; //Numero de listas equivalente a vertices dentro de una lista
    }
  
void addEdge(int i, int j, bool undir=true){ 
//Undir es si apunta en ambas direcciones, en esta caso es predeterminado

    l[i].push_back(j); 
    if(undir){
        l[j].push_back(i);
    }
}

void printAL(){

    for(int i=0;i<V;i++){
cout<<i<<"-->";
for(auto node:l[i]) cout<<node<<",";
cout<<endl;



    }
}

};

int main(){

Graph g(6);
g.addEdge(0,3);
g.addEdge(0,4);
g.addEdge(2,1);
g.addEdge(3,4);
g.addEdge(4,5);
g.addEdge(2,5);
g.addEdge(3,5);

g.printAL();









    return 0;
}
