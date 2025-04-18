#include <bits/stdc++.h>
using namespace std;
int secondlargest(int arr[],int n){
    int largest=-1,seclarg=-1;
    for (int i = 0; i <n ; i++)
    {
        if(arr[i]>largest)largest=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<largest && arr[i]>seclarg)seclarg=arr[i];
    }
    
 return seclarg;   
}


int slarg(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        
    }
    
}
int main() {
    int arr[]={1,2,3,5,2,1};
    cout<<secondlargest(arr,6);

    return 0;
}