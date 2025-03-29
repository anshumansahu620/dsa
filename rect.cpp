
#include<bits/stdc++.h>


using namespace std;
void  rect(int a, int b){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            (i==0||i==(a-1)||j==0||j==(b-1))?cout<<"*":cout<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
rect(4,5);
return 0;
}