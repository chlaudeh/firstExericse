#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool cmp(int q, int w)
{
    return q > w;
}

int main()
{
    vector<int> a;
    a.push_back(5);
    a.push_back(4);
    a.push_back(3);
    a.push_back(1);
    a.push_back(2);

    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
