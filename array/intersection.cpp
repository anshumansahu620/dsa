#include <bits/stdc++.h>
using namespace std;



//presentin both


vector<int> intesection(vector<int> &a, vector <int> &b){
    
    vector<int> intersection;

    int n1=a.size();
    int n2=a.size();
    vector<int> visited(n2)={0};


    int i=0;
    int j =0;


    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j< n2; j++)
        {
            if(a[i]==b[j]&& visited[j]=0){
                intersection.push_back(a[i]);
                visited[j]=1;
            }
        }
        if(b[j]>a[j]){
            break;
        }
        
    }
    

    return intersection;




}



vector<int> optimised( vector<int> &a , vector<int> &b){
    

    int i=0;
    int j=0;


    int m=a.size();
    int n=a.size();

    vector<int> ans;


    while(i<n && j<m){
        if(a[i]>b[j]){
            j++;

        }
        else if(a[i]<b[j]){
            i++;

        }
        else{
            ans.push_back(a[i]);
            i++;j++;
        }
    }
}


int main() {
    return 0;
}