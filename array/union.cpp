#include <bits/stdc++.h>
using namespace std;

vector<int>u(vector<int>&v1, vector<int>&v2){
   
    set<int> st;
    for (int i = 0; i < v1.size(); i++)
    {
        st.insert(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        st.insert(v2[i]);
    }
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }

    return temp;

    
    
}

vector<int>uoptimised(vector<int>&v1, vector<int>&v2){
    int i=0;int j=0;
    int n=(v1.size()>v2.size())?v1.size():v2.size();
    vector<int>temp;
    for (i = 0; i < n; i++)
    {
        if        
    }
    


    
    
}



int main() {
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {3, 6, 7, 10, 12};
    vector<int>temp=u(v1,v2);
    for(auto it:temp){
        cout<<it<<" ";
    }
    return 0;
}