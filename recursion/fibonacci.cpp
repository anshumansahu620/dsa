#include<bits/stdc++.h>
using namespace std;
int fib(int a){
    if(a==0)return 0;
    else if(a==1) return 1;
    return fib(a-1)+fib(a-2);
}
int main(){
    for (int i = 0; i < 6; i++)
    {
        cout<<fib(i)<<" ";
    }
    
return 0;
}