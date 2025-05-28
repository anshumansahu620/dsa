#include <bits/stdc++.h>
using namespace std;

vector<int> lr(vector<int>&v,int n){
int n=n%v.size();
vector<int> temp(n);


for (int i = n; i <v.size(); i++)
{
    v[i]=temp[i];
    v[i-n]=v[i];
    
}
int j=0;
for (int i = v.size()-n; i < v.size(); i++)
{
    v[i]=temp[j-(v.size()-n)];
    j++;
}


}

int main() {
    return 0;
}