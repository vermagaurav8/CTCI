#include <bits/stdc++.h>
using namespace std;

#define ALPHA 256 // Num of char in input alphabet

void rabinKarp(string pat, string txt, int PN)
{
    int m = pat.length();
    int n = txt.length();

    int hashPat = 0; // hash value for pat
    int hashtxt = 0; // hash value for txt
    int h = 1;       // pow(ALPHA, m-1)%PN
    int j;

    for (int i = 0; i < m - 1; i++)
    {
        h = (h * ALPHA) % PN;
    }

    for (int i = 0; i < m; i++)
    {
        hashPat = (ALPHA * hashPat + pat[i]) % PN;
        hashtxt = (ALPHA * hashtxt + txt[i]) % PN;
    }

    for (int i = 0; i <= n - m; i++)
    {
        if (hashPat = hashtxt)
        {
            for (j = 0; j < m; j++)
            {
                if (txt[i + j] != pat[j])
                    break;
            }

            if (j == m)
            {
                cout << "Pattern found at index: " << i << endl;
            }
        }

        if (i < n - m)
        {
            hashtxt = (ALPHA * (hashtxt - txt[i] * h) + txt[i + m]) % PN;

            // Handling negative values
            if (hashtxt < 0)
            {
                hashtxt = hashtxt + PN;
            }
        }
    }
}

int main()
{
    string txt = "THIS IS A TEST TEXT";
    string pat = "TEST";

    int PN = 101; // primeNum
    rabinKarp(pat, txt, PN);
    return 0;
}