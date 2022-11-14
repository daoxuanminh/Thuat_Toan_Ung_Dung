#include <bits/stdc++.h>

using namespace std;

string Sum(string a, string b)
{
    while (a.length() < b.length())
    {
        a = '0' + a;
    }
    while (b.length() < a.length())
    {
        b = '0' + b;
    }

    string result;
    int sum, mem = 0;
    int numChar = a.length();
    for (int i = numChar - 1; i >= 0; i--)
    {
        sum = (a[i] - '0') + (b[i] - '0') + mem;
        mem = sum / 10;
        result = char(sum % 10 + '0') + result;
    }

    if (mem == 1)
        result = "1" + result;
    // reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string a = "20", b = "990";
    // cin >> a >> b;
    cout << Sum(a, b);
}