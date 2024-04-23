#include <bits/stdc++.h>
 
 
using namespace std;


 void imprimir(vector<int>&v){
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
 }
int main(){

vector<int> first;
vector<int> second(4,20);
int numbers[]={10,20,30,40};

vector<int>third(numbers,numbers+4);
vector<int> fourth(third);
vector<int> fifth={3,46,1,3};
//imprimir(fifth);

fifth.push_back(100);
imprimir(fifth);
fifth.pop_back();
imprimir(fifth);
fifth.clear();
imprimir(fifth);
fourth.erase(fourth.begin(),fourth.begin()+3);
imprimir(fourth);
third.erase(third.begin()+1);
imprimir(third);
    return 0;


}
