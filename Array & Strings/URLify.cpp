#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Mr John Smith   ";
    int trueLength = 13;

    int spaceCount = 0;
    for (int i = 0; i < trueLength; i++)
    {
        if (str[i] == ' ')
            spaceCount++;
    }

    // traversing from left, counting the whitespaces
    int index = trueLength + spaceCount * 2;
    if (trueLength < str.length())
        str[trueLength] = '\0';

    // Iterating from right and substitute value if whitespace found
    for (int i = trueLength - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[index - 1] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
            index = index - 3;
        }
        else
        {
            str[index - 1] = str[i];
            index--;
        }
    }

    cout << "Urlified String: " << str << endl;

    return 0;
}
