#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int k;
    int value;
    string name;
    Node(int _k, int _value)
    {
        k = _k;
        value = _value;
    }
};

int main()
{
    priority_queue<int> Q;                            // max priority queue
    priority_queue<int, vector<int>, greater<int>> P; // min priority queue su dung vector de co the sap xep lai mang
    Q.push(4);
    P.push(4);
    Q.push(1);
    P.push(1);
    Q.push(100);
    P.push(100);
    Q.push(50);
    P.push(50);

    while (!Q.empty())
    {
        int e = Q.top();
        Q.pop();
        int f = P.top();
        P.pop();
        cout << "POP Q " << e << "  : POP P " << f << endl;
    }

    stack<int> S;
    S.push(1);
    S.push(3);
    S.push(2);
    printf("S stack pop: ");
    while (!S.empty())
    {
        printf("%d ", S.top());
        S.pop();
    }
    printf("\n");
    set<int> R;
    R.insert(7);
    R.insert(2);
    R.insert(10);
    R.insert(8);
    set<int>::iterator it; // iterator la 1 con tro tro den vung chua co kieu set<int>
    for (it = R.begin(); it != R.end(); it++)
    {
        cout << "R : " << *it << endl;
    }
    printf("%d\n", *R.find(8));
    vector<int> a;
    vector<int> b(1, 2);
    for (int i = 0; i < 10; i++)
    {
        a.push_back(i);
    }
    for (int i = 0; i < a.size(); i++)
    {
        printf("%d ", a[i]);
    }
    cout << endl;
    // add two interger
    

}