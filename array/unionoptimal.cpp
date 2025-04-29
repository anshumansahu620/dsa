#include <bits/stdc++.h>
using namespace std;

// unique elements  2 pointer method
vector<int> union(vector<int> &a, vector<int> &b)
{

    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;

    vector<int> unionarray;

    while (i < n1 && j < n2)
    {

        if (a[i] <= b[j])
        {
            if (unionarray.size() == 0 ||unionarray.back() != a[i])
            {
                unionarray.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionarray.size() == 0 ||unionarray.back() != b[j])
            {
                unionarray.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionarray.size() == 0 ||unionarray.back() != a[i])
        {
            unionarray.push_back(a[i]);
        }
        i++;
    }
    while( j< n2){
        if (unionarray.size() == 0 ||unionarray.back() != b[j])
            {
                unionarray.push_back(b[j]);
            }
            j++;
        
    }

return unionarray;
}

int main()
{
    return 0;
}