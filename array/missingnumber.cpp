#include <bits/stdc++.h>
using namespace std;


vector<int> missingnumber(vector<int>&v){
    vector<int> ans;
    int n=v.size();
    int flag;
    for (int i = 1; i <= n; i++)
    {
       for (int j = 0; j < n-1; j++)
       {
        if(v[i]==i){
            flag=1;
            break;
        }
       }

       if(flag==0){
        ans.push_back(i);
       }
       
    }

    return ans;
    
}


//using hash

int main() {
    return 0;
}
