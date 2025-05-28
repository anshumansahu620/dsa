#include <bits/stdc++.h>
using namespace std;

vector<int> toend(vector<int> &nums){
    int j;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    
    for (int i = j+1; i < nums.size(); i++)
    {
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return nums;
}


int main() {

    vector<int>v={1,2,3,0,4,5,0};
    vector<int>n=toend(v);
    for (int i = 0; i < n.size(); i++)
    {
        cout<<n[i];
    }
    
    
    return 0;
}