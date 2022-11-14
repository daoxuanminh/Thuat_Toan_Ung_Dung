#include <bits/stdc++.h>
using namespace std;
void TRY(int k)
{
    for (int i = 1; i < T[k].size(); i++)
    {
        int t = T[k][i];
        if (check(t, k))
        {
            x[k] = t;
            load[t] += 1;
            if (k == n)
            {
                solution();
            }
            else
            {
                if (load[t] == res)
                {
                    TRY(k + 1);
                }
            }
            load[t] -= 1;
        }
    }
}
int main(int argc, char const *argv[])
{
    input();
    for (int t = 1; t <= m; t++)
    {
        load[t] = 0;
    }
    res = 1e9;
    TRY(1);
    cout << res;
    return 0;
}