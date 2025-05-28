#include <bits/stdc++.h>
using namespace std;

bool rabinkarp(vector<char> &t  vector<char> &p){
    int target =0;
    for (int i = 0; i < p.size(); i++)
    {
        target+=(int)p[i];
    }
    int sum =0;
    for (int i = 0; i <t.size()-p.size() ; i++)
    {
        
        for (int j = 0; j < p.size(); j++)
        {
            if(sum==target){
                return true;
                break;
            }
        }
        
        
        
    }
    return false;
    
}

int main() {
    return 0;
}