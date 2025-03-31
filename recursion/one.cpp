#include<bits/stdc++.h>
using namespace std;
void print(int b){
    if(b==0)return;
    cout<<"name"<<endl;
    print(b-1);
}
void print1ton(int i = 1, int n=10) { // Added a default value for `n` for testing
    if (i > n) return;  // Change `==` to `>` to ensure `n` is printed too
    cout << i << endl;
    print1ton(i + 1, n); // Corrected the recursive call
}
int main(){
print1ton(1,5);
return 0;
}