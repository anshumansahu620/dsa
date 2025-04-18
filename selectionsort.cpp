#include <bits/stdc++.h>
using namespace std;

int ss(int arr[],int n){
    int i,j;
    for ( i = 0; i < n-1; i++)
    {
        int min=i;
        for ( j = i+1; j < n ; j++)
        {
            if(arr[j]<arr[min]){
            min=j;
            }
        }
        swap(arr[i],arr[min]);
        
    }
    
}

int main() {

    int arr[]={1,7,5,43,2};
    ss(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}