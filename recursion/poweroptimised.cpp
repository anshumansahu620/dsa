#include<bits/stdc++.h>
using namespace std;
int pow(int p,int q){
    if(q==0)return 1;
    if(q%2==0){
        int res=pow(p,q/2);
        return res*res;
    }
    else{
        int res=pow(p,(q-1)/2)*pow(p,(q-1)/2);
        return p*res;
    }
}

int main(){

    cout<<pow(2,4);

return 0;
}