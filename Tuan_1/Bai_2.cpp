// Integer Inquiry
// Cong nhieu so nguyen 1 luc 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum[201] = {0}, i, j, length;
    while (gets(s))
    {
        if (!strcmp(s, "0"))
        {
            break;
        }
        length = strlen(s);
        for (i = 0, j = length - 1; i < length; i++, j--)
        {
            sum[j] += s[i] - '0';
        }
    }

    for (i = 0; i < 200; i++)
    {
        if (sum[i] >= 10)
        {
            sum[i + 1] += sum[i] / 10;
            sum[i] %= 10;
        }
    }

    i = 200;
    while (sum[i] == 0 && i >= 0)
    {
        i--;
    }

    if (i == -1)
        printf("0\n");
    else
    {
        for (; i >= 0; i--)
            printf("%d", sum[i]);
    }

    return 0;
}