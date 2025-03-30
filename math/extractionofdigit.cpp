#include<bits/stdc++.h>


using namespace std;
int extract(int a){
    int b= (int)(log10(a)+1);
    return b;
}


int rev(int b){
    int revnum=0;
    while(b>0){
        int lastnum=b%10;
        b=b/10;
        revnum=(revnum*10)+lastnum;
    }
    return revnum;

}
bool pallindrome(int b){
    bool flag;
    (b==rev(b))? flag=true:flag=false;
    return flag;
}

#include <iostream>
using namespace std;

bool armstrongnum(int a) {
    int sum = 0, original = a; // Store the original number

    while (a > 0) {
        int lastdig = a % 10;
        sum += lastdig * lastdig * lastdig;
        a /= 10;
    }

    return sum == original; // Compare with the original number
}
void printalldivisor(int a){
    int d=1;
    while(d<=sqrt(a)){
        if(a%d==0)cout<<d<<endl;
        d++;
    }
} 
bool prime(int a){
    int count=0;
    for (int i = 0; i*i < a; i++)
    {
        if(a%i==0)count++;
    }
    
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printalldivisor(num);

    return 0;
}


