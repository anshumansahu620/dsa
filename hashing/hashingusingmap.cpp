#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"programa started";
    int n;

    cin>>n;
    vector<int>a(n);

    
    map<int,int>hash;
    for (int i = 0; i < n; i++){
        cout<<"enter elelment at index"<<i+1<<endl;
        cin>>a[i];
        hash[a[i]]+=1;
    }

    cout<<"hashing done"<<endl;
   
    for(auto &pair:hash){
        cout<<pair.first<<"->"<<pair.second<<endl;
    }
    
    


return 0;
}