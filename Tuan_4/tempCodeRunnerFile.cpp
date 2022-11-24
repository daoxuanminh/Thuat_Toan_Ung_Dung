#include <bits/stdc++.h>
using namespace std;

int a[50];
int L, R;
int n;

void input()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", a[i]);
}

int maxLeft(int L, int m)
{
    int S, ans = a[L];
    for (int i = m; i <= R; i--)
    {
        S += a[i];
        ans = max(ans, S);
    }
    return ans;
}
int maxRight(int R, int m)
{
    int S, ans = a[R];
    for (int i = m; i <= R; i++)
    {
        S += a[i];
        ans = max(ans, S);
    }
    return ans;
}

int subSeqMax(int L, int R)
{
    if (L == R)
        return a[L];
    int m = (L + R) / 2;
    int wL = subSeqMax(L, m);
    int wR = subSeqMax(m + 1, R);
    int wLR = maxLeft(L, m) + maxRight(R, m + 1);
    return max(max(wL, wR), wLR);
}
int main(int argc, char const *argv[])
{
    input();
    cout << subSeqMax(0, n);
    return 0;
}