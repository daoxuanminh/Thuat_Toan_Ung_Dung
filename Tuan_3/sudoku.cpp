#include <bits/stdc++.h>
using namespace std;
int solution[10][10];
bool markRow[9][10], markCol[9][10];
bool markSquare[3][3][10];
bool check(int v, int r, int c)
{
    return markRow[r][v] == false && markCol[c][v] == false && markSquare[r / 3][c / 3][v] == false;
}
void printSolution()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            //			cout << solution[i][j] << " ";
            printf("%d ", solution[i][j]);
        }
        // printf("/n");
        cout << endl;
    }
}
void Try(int r, int c)
{
    for (int v = 1; v <= 9; v++)
    {
        if (check(v, r, c))
        {
            solution[r][c] = v;
            markRow[r][v] = true;
            markCol[c][v] = true;
            markSquare[r / 3][c / 3][v] = true;
            if (r == 8 && c == 8)
            {
                printSolution();
                // exit(0);
            }
            else
            {
                if (c < 8)
                {
                    Try(r, c + 1);
                }
                else
                {
                    Try(r + 1, 0);
                }
            }
            markRow[r][v] = false;
            markCol[c][v] = false;
            markSquare[r / 3][c / 3][v] = false;
        }
    }
}

int main()
{
    for (int v = 1; v <= 9; v++)
    {
        for (int i = 0; i < 9; i++)
        {
            markRow[i][v] = false;
        }
        for (int i = 0; i < 9; i++)
        {
            markCol[i][v] = false;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                markSquare[i][j][v] = false;
            }
        }
    }
    Try(0, 0);
    return 0;
}