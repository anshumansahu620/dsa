#include<bits/stdc++.h>
using namespace std;




void ss(vector<int>&v){
    
    for(int i=0;i<=v.size()-2;i++){
        int min=i;
        for(int j=i+1;j<v.size();j++){
            if(v[j]<v[min])min=j;
            
            
        }
        swap(v[i],v[min]);
    }
}


int main(){
    vector<int> arr = {5, 2, 8, 1, 3, 7, 4, 2, 9, 6};
    ss(arr);
    for (int x : arr) {
        cout << x << " ";
    }
return 0;
}