#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int flag=0;
        for (int j = 0; j < n; j++)
        {
            if(v[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }

        
    }

}


//using hashmap

int missing1(vector<int>&v){
    unordered_map<int,int> hash(v.size()+1);
    for (int  i = 0; i < v.size(); i++)
    {
        hash[v[i]]=1;
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        if(hash[i]==0){
            return i;
        }
    }
    
}


//optimised 
int missing2(vector<int>&v){
    int n= v.size();
    int sum=0;
    for (int i = 0; i <n ; i++)
    {
        sum+=v[i];
    }
    int missing=(n*(n+1)/2)-sum;
    return missing;
}


int main() {

    vector<int> v={0,1,2,3,5};
    cout<<missing2(v);
    return 0;
}