#include<iostream>
using namespace std;

void printholowrect(int n){

    
    for (int i = n; i >=0; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < 2*i; j++)
        {
            cout<<" ";
        }for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    

}



int main(){
    printholowrect(4);

return 0;
}