#include <bits/stdc++.h>
using namespace std;

bool oneReplace(string s1, string s2)
{
    bool foundDiff = false;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            if (foundDiff)
            {
                return false;
            }
            foundDiff = true;
        }
    }
    return true;
}

bool oneInsert(string s1, string s2)
{
    int index1 = 0;
    int index2 = 0;

    while (index2 < s2.length() && index1 < s1.length())
    {
        if (s1[index1] != s2[index2])
        {
            if (index1 != index2)
                return false;
            index2++;
        }
        else
        {
            index1++;
            index2++;
        }
    }
    return true;
}

bool oneAway(string str1, string str2)
{
    if (str1.length() == str2.length())
    {
        return oneReplace(str1, str2);
    }
    else if (str1.length() + 1 == str2.length())
    {
        return oneInsert(str1, str2);
    }
    else if (str1.length() - 1 == str2.length())
    {
        return oneInsert(str2, str1);
    }

    return false;
}

int main()
{

    string str1, str2;
    cin >> str1 >> str2;

    cout << oneAway(str1, str2);

    return 0;
}