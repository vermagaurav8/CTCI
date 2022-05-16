#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Tact Co";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    map<char, int> freqMap;

    int countOdd = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            freqMap[str[i]]++;
            if (freqMap[str[i]] % 2 == 0)
            {
                countOdd++;
            }
            else
            {
                countOdd--;
            }
        }
    }

    if (countOdd <= 1)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }
    return 0;
}