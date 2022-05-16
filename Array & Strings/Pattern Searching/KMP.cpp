#include <bits/stdc++.h>
using namespace std;

void lpsConstruction(char *pat, int m, int *lps)
{
    int len = 0;
    lps[0] = 0;

    int i = 1;
    while (i < m)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void kmp(char *pat, char *txt)
{
    int m = strlen(pat);
    int n = strlen(txt);

    int lps[m];
    lpsConstruction(pat, m, lps);

    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (pat[j] == txt[i])
        {
            i++;
            j++;
        }

        if (j == m)
        {
            cout << "Pattern found at index: " << i - j << endl;
            j = lps[j - 1];
        }
        else if (i < n && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

int main()
{
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABCABAB";
    kmp(pat, txt);
    return 0;
}