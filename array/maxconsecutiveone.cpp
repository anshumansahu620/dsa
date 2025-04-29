#include <bits/stdc++.h>
using namespace std;

//longest sequence of ones

int max(vector<int>&v){
    int n=nums.size();
    int count=0;
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]==1){
            count++;
            if(count>max){
                max=count;
            }
        }
        else if(nums[i]==0){
            count=0;

        }
    }
    return max;
}




int main() {
    vector<int> v={0,1,0,1,1};
    cout<<max(v);
    return 0;
}