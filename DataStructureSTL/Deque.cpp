#include <bits/stdc++.h>
 
 
using namespace std;
void imprimir(deque <int> dq){

    for(int i=0;i<dq.size();i++) cout<<dq[i]<<" ";
    cout<<endl;
}


int main(){

deque <int> dq={3,5,1,3};
imprimir(dq);
dq.push_back(77);
dq.push_front(88);
imprimir(dq);

cout<<dq.back()<<" "<<dq.front()<<endl;

    return 0;


}
