#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr){
    int n=arr.size();
    for (int i = 0; i<n; i++)
    {
        int min=i;
        for (int j = i+1; j<n; j++)
        {
            if(arr[min]>arr[j])min=j;
            
           
        }
        swap(arr[i],arr[min]);
        
    }
    
}

vector<int> givecolors(vector<int> &nums) {
    selectionsort(nums); // assumes this is already defined
    vector<int> result = nums;
    vector<int> colors;
    
    int color = 0;
    colors.push_back(color); // First element always gets color 0
    
    for (int i = 1; i < result.size(); i++) {
        if (result[i] != result[i - 1]) {
            color++; // Increment color when the value changes
        }
        colors.push_back(color);
    }
    
    return colors;
}

int main() {
vector<int> v={1,5,3,2,1};
vector<int>a=givecolors(v);
for (int i = 0; i < v.size(); i++)
{
    cout<<a[i]<<" ";
}




    return 0;
}