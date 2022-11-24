#include <bits/stdc++.h>
using namespace std;

int x[100];
int n, U, M, N;

void PrintSolution()
{
    cout << "( ";
    for (int i = 1; i <= n; i++)
        cout << x[i] << " ";
    cout << ")\n";
}

void Try(int k)
{
    int U = N - M - (n - k);

    for (int y = 1; y <= U; y++)
    {
        x[k] = y;
        M = M + y;
        if (k == n)
        {
            if (M == N)
                PrintSolution();
        }
        else
            Try(k + 1);
        M = M - y;
    }
}
int main()
{
    M = 0;
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter N = ";
    cin >> N;
    Try(1);
}