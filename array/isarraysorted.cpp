#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& v){
    bool sorted=true;
    int n=v.size();
    for (int i = 0; i < n-1; i++)
    {
        if(v[i]>v[i+1])sorted=false;

    }

    return sorted;
    
}



int main() {

    vector<int> v={1,2,3,1};
  cout<<check(v);
    
    return 0;
}