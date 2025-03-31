#include<iostream>
using namespace std;
int a[]={1,2,3,5,6,57,7};


void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverse(int i,int n){
    if(i==(n/2))return;
    swap(&a[i],&a[n-i]);
    reverse(i+1,n);

}
int main(){

    reverse(0,6);
    for (int i = 0; i < 7; i++)
    {
        /* code */
        cout<<a[i]<<endl;
    }
    

return 0;
}