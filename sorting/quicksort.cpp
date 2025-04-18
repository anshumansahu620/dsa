#include <bits/stdc++.h>
using namespace std;


int partition(vector<int>& arr[],int low,int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
            
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }



    }
swap(arr[low],arr[j]);
    return j; 
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}

int main() {
    int arr[]={1,5,3,2,4,5};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}