#include <bits/stdc++.h>
using namespace std;

int linearsearch(vector<int> &v, int target)
{
    for (int i = 0; i <= v.size(); i++)

    {
        if (v[i] == target)
        {
            return i;
            break;
        }
        else if (i == v.size())
            return -1;
    }
}

int main()
{

    vector<int> v = {1, 3, 4, 5, 7};
    cout << linearsearch(v, 9);
    return 0;
}