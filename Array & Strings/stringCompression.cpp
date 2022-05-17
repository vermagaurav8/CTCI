#include <bits/stdc++.h>
using namespace std;

void compression(string str)
{
    int len = str.length();
    string augmented = "";

    int consecutiveCount = 0;
    for (int i = 0; i < len; i++)
    {
        consecutiveCount++;

        if (i + 1 >= len || str[i] != str[i + 1])
        {
            augmented += "" + str[i] + consecutiveCount;
            consecutiveCount = 0;
        }
    }

    augmented.length() < str.length() ? cout << augmented << endl : cout << str << endl;
}

int main()
{
    string str;
    cin >> str;

    compression(str);

    return 0;
}