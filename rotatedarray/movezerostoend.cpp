#include <bits/stdc++.h>
using namespace std;


vector<int> movezeros(vector<int> &v ,int n){
    vector<int>temp; 
    vector<int>zeros;

    for (int i = 0; i < n; i++)
    {
        if(v[i]==0){
        zeros.push_back(v[i]);
        }
        else{
            temp.push_back(v[i]);
        }
    }
    temp.insert(temp.end(), zeros.begin(), zeros.end());
    
    
    
}

int main() {

    vector<int> v={1,2,9,0,5,4,0,0,1};
    vector<int> temp=movezeros(v,9);
    for (int i = 0; i < temp.size(); i++)
    {
        cout<<temp[i];
    }
    

    return 0;
}