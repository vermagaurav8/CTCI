// Que 2: Given two strings, write a method to decide wheather One is the permutation of other.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string one, two;
    cin >> one >> two;

    map<char, int> freqOne; // store the char frequency of first string
    bool isPermutation = true;

    if (one.length() > two.length() || two.length() > one.length())
    {
        isPermutation = false;
    }
    else
    {

        for (int i = 0; i < one.length(); i++)
        {
            freqOne[one[i]]++;
        }

        for (int i = 0; i < two.length(); i++)
        {
            freqOne[two[i]]--;
        }

        for (auto it = freqOne.begin(); it != freqOne.end(); it++)
        {
            if (it->second > 0)
            {
                isPermutation = false;
                break;
            }
        }
    }

    cout << isPermutation << endl;

    return 0;
}