#include <bits/stdc++.h>
 
 
using namespace std;
void imprimir(stack <string> s){
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
   cout<<endl;
}


int main(){

stack <string> s;

s.push("C++");
s.push("Arribalaschivas");
s.push("FI");
s.push("Java");
imprimir(s);

    return 0;


}
