#include <bits/stdc++.h>
using namespace std;
const int MAX_LENGTH = 100000;
long int sequence[MAX_LENGTH];

// typedef struct
// {
//     int left;
//     int right;
// } LR;
long int find_min(int L, int R)
{
    int min = sequence[L];
    for (long int i = L; i <= R; i++)
    {
        if (sequence[i] <= min)
        {
            min = sequence[i];
        }
    }
    return min;
}
int main()
{
    ios_base::sync_with_stdio(0); // insert
    cin.tie(0);                   // insert
    long int n;
    long int m;
    // map<LR, int> query;
    cin >> n;
    // cout << n;
    for (long int i = 0; i < n; i++)
    {
        cin >> sequence[i];
        // cout << sequence[i] << " ";
    }
    cin >> m;
    int L, R;
    long int sum = 0;
    for (long int i = 0; i < m; i++)
    {
        cin >> L >> R;
        sum += find_min(L, R);
    }
    cout << sum;
    return 0;
}