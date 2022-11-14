#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int M, n, result = 0, f;
int a[MAX], x[MAX], t[MAX];
void solution()
{

    if (f == M)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << x[i];
        }
        cout << endl;
        result++;
    }
}

void TRY(int k)
{
    for (int v = 1; v <= (M - f - (t[n] - t[k])); v++)
    {
        x[k] = v;
        f += a[k] * x[k];
        if (k == n)
        {
            solution();
        }
        else
        {
            TRY(k + 1);
        }
        f -= a[k] * x[k];
    }
}
int main(int argc, char const *argv[])
{
    cin >> n >> M;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        t[i] = t[i - 1] + a[i];
    }
    TRY(1);
    cout << result << endl;
    return 0;
}