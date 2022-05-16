#include <bits/stdc++.h>
using namespace std;

void naive(char *txt, char *pat)
{
    int m = strlen(txt);
    int n = strlen(pat);

    for (int i = 0; i <= m - n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (txt[i + j] != pat[j])
                break;
        }

        if (j == n)
        {
            cout << "Pattern found at index: " << i << endl;
        }
    }
}

int main()
{

    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    naive(txt, pat);
    return 0;
}