#include <bits/stdc++.h>
 
 
using namespace std;
void imprimir(queue <string> q){
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
   cout<<endl;
}


int main(){

queue <string> q;

q.push("C++");
q.push("Arribalaschivas");
q.push("FI");
q.push("Java");
imprimir(q);

    return 0;


}
