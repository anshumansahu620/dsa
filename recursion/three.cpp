#include<iostream>
using namespace std;
void add(int i,int sum){
    if(i<1) {
        cout<<sum;
        return;
    }
    
    add(i-1,sum+i);
}



int main(){
add(5,0);


return 0;
}