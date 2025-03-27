#include<iostream>
using namespace std;
void printtriangle(int a){

for(int i=a;i>=0;i--){
    for(int j=i;j>0;j--){
        cout<<"8"<<" ";
    }
    cout<<endl;
}

}
int main(){

printtriangle(5); 


return 0;
}