#include<bits/stdc++.h>
using namespace std;

string a="madam";

bool revstr(int i,int n){
    if(i>=(n/2))return true;
    if(a[i]!=a[n-i-1])return false;
    return revstr(i+1,n);
}



int main(){
revstr(0,5)?cout<<"it is a pallindrome":cout<<"it is not a pallindrome";
return 0;
}