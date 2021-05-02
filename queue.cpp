#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> a = {6, 5, 7, 8, 5, 3, 2, 1, 6, 7, 9, 6};

int main()
{
    priority_queue<int> pq;
    for (int i = 0; i < a.size(); i++)
    {
        pq.push(-a[i]);
    }
    while (!.pq.empty())
    {
        cout << -pq.top() << " ";
        pq.pop();
    }

    /*
        
    pq.push();
    pq.pop();
    pq.top();
    pq.size();
    pq.empty(); 비었으면 1, 안비었으면 0


    */
}
