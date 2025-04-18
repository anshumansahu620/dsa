#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int size){
    for (int i = size; i >0; i--)
    {
        for (int j = 0; j < size-i; j++)
        {
        if(arr[j]<arr[j+1])swap(arr[j],arr[j+1]);
        }
        
    }
    
}

int main() {

    int arr[]=
    bubblesort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}