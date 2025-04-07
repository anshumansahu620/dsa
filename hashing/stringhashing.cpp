#include<bits/stdc++.h>
using namespace std;
int main(){
 cout<<"enter a string";
 string s;
 cin>>s;
 cout<<"hashing started";
    int hash[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
 
return 0;
}