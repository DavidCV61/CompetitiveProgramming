#include <bits/stdc++.h>
 
 
using namespace std;


int main(){

//priority_queue <int> heap; //Max
priority_queue<int, vector<int>, greater<int>> heap; //Min

heap.push(2);
heap.push(6);
heap.push(24);
heap.push(12);
heap.push(1);
heap.push(10);

while(!heap.empty()){

    cout<<heap.top()<<" ";
    heap.pop();
}

    return 0;


}
