#include<iostream>
using namespace std;


void print(string name,int n,int i){
    if(i>n)return;
    cout<<name<<endl;
    print(name,n,i+1);
}
void print1(int n=10,int i=1){
    
    if(i>n)return;
    cout<<i;
    print1(n,i+1);
    
}


int main(){
    print1(10,1);

return 0;
}