#include<bits/stdc++.h>
using namespace std;

void bs(vector<int>&v){
    int min;
    for (int i = 0; i < v.size()-1; i++)
    {min=i;
        for(int j=i+1;j<v.size();j++){
        if(v[j]>v[min]) {
            min=j;
        }  
        }
        swap(v[i],v[min]);
    }
    
}
int main(){
    vector<int> v={1,3,2,4};
    bs(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    


return 0;
}