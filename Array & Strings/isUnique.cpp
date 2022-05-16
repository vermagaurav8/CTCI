// Que: Implement an Algo to determin if a string has all unique characters. What if you can't use additional data structure.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    set<char> check;
    bool isUnique = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (check.find(s[i]) != check.end())
        {
            isUnique = false;
            break;
        }
        else
        {
            check.insert(s[i]);
        }
    }

    cout << isUnique << endl;

    return 0;
}