#include<bits/stdc++.h>
using namespace std;

void bs(vector<int>&v){
    for (int i = 0; i < v.size()-1; i++)
    {
        for(int j=0;j<v.size()-i-1;j++){
            swap(v[i],v[j]);
        }
    }
    
}
int main(){

return 0;
}