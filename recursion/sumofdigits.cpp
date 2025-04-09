#include<bits/stdc++.h>
using namespace std;
int sum(int a ){

    if(a>=0 and  a<=9) return a;
    
    return sum(a/10)+a%10;
    

}

int pow(int p,int q){
    if(q==0) return 1;
    return p*pow(p,q-1);
}

int main(){
cout<<pow(3,3);
return 0;
}