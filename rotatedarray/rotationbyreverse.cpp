#include <bits/stdc++.h>
using namespace std;


vector<int> lrr(vector<int>&v,int n,int d){
    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.begin() + n);
    reverse(v.begin(), v.begin() + n);
    return v;
}

int main() {


vector<int> v={1,2,3,4,5};
vector<int>temp=lrr(v,5,2);

for (int i = 0; i < temp.size(); i++)
{
   cout<< temp[i];
}


    return 0;
}