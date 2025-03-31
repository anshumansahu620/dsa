#include<iostream>
using namespace std;
int a[5]={1,2,3,4,7};
int f=0;
int r=4;
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void rev(int f,int r){
    if(f>r)return;
    swap(&a[f],&a[r]);
    rev(f+1,r-1);
}

int main(){

rev(f,r);
for (int i = 0; i < 5; i++)
{
    cout<<a[i];
}


return 0;
}