#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Tact Coa";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    map<char, int> freqMap;

    int countOdd = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            freqMap[str[i]]++;
        }
    }

    bool isPalindromePermutation = true;

    for (auto it = freqMap.begin(); it != freqMap.end(); it++)
    {
        if (it->second % 2 != 0)
        {
            countOdd++;
            if (countOdd > 1)
            {
                isPalindromePermutation = false;
            }
        }
    }

    cout << isPalindromePermutation << endl;

    return 0;
}