#include <bits/stdc++.h>
using namespace std;
//brute
int twiceonce(vector<int> &v){
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        int num=v[i];
        int count=0;
        for (int j = 0; j < n; j++)
        {
            if(v[j]==num){
                count++;
            }
        }
        
        if(count==1){
            return num;
        }
        
    }
    return -1;
    
}

//better solution hasing

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int TwiceOnce(vector<int>& v) {
    unordered_map<int, int> hash;
    
    for (int num : v) {
        hash[num]++;
    }

    for (int num : v) {
        if (hash[num] == 1) {
            return num;
        }
    }

    return -1; 
}
//xor


int Xor(const vector<int> &v) {
    int result = 0;
    for (int num : v) {
        result ^= num;
    }
    return result;
}



int main() {
    vector<int> v={1,1,3,3,2,2,4};
    cout<<Xor(v);
    return 0;
}