#include<iostream>
using namespace std;

void print(int a ){

    for(int i=0;i<a;i++){
       for (int j = 0; j <a-i ; j++)
       {
        cout<<" ";
       }for (int k = 0; k < 2*i+1; k++)
       {
        cout<<"*";
       }
       cout<<endl;
       
       
    }
      
}
void printinverted(int a){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j<i   ; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*(a-i)-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }
    
}

void printvertical(int a)
{
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <a-i-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
}
void printbinarytriangle(int a){

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <i; j++)
        {
           (i%2==0 ) ? cout<<1<<" ":cout<<0<<" ";
        }
        cout<<endl;
        
    }
}
void printtower(int a)
{for (int i = 1; i <=a ; i++)
{
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int k=0;k<2*(a-i);k++){
        cout<<" ";
    }



    for(int j=i;j>=1;j--){
        cout<<j;
    }
 
    
    
    
    cout<<endl;
    
    
}

}


void printnumt(int a){
    int x=1;
    for (int i = 0; i <= a; i++)
    {
        for(int j=0;j<i;j++){
            cout<<x++<<" ";
        }
        cout<<endl;
    }
    
}
void printabc(int a){

    char ch='A';
    for (int i = a; i >=1; i--)
    {
        for (int j = 0; j <i; j++)
        {
        char b=ch+i;
        cout<<b;
            
        }
        cout<<endl;


        
    }
    
}

void printabcincdec(int a){
    
    

for(int i=0;i<a;i++){
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for (int j = 0; j <a-i ; j++)
           {
            cout<<" ";
           }
        for (int k = 0; k < 2*i+1; k++){
           if(k<breakpoint)cout<<ch++;
           else ch--;
        }
        cout<<endl;
           }
           
           
           
        }
          
    



int main(){
    // print(4);
    // printinverted(4);


    // printvertical(5);
    // printbinarytriangle(4);

    printabcincdec(4);

return 0;
}