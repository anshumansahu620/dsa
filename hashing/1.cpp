#include<bits/stdc++.h>
using namespace std;
int main(){

cout<<"enter n";

    int n;
    cin>>n;
    int a[n];
    cout<<"enter values into array";
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]+=1;
    }
    
    int q;
    cin>>q;
    while(q--){
        cout<<hash[q]<<endl;
        
    }

    
return 0;
}