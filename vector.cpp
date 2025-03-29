#include<bits/stdc++.h>


using namespace std;
int main(){
    vector <int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    vector <int> v1(v);
    vector <int> ::iterator it;

    
    
    for(auto it =v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    
    
    

return 0;
}