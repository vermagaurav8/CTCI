#include <bits/stdc++.h>
using namespace std;

class HashMap
{
private:
    list<int> *map;
    int total_elements;

    int getHash(int key)
    {
        return key % total_elements;
    }

public:
    HashMap(int n)
    {
        total_elements = n;
        map = new list<int>[total_elements];
    }

    void insert(int key)
    {
        map[getHash(key)].push_back(key);
    }

    void remove(int Key)
    {
        int x = getHash(Key);

        list<int>::iterator i;
        for (i = map[x].begin(); i != map[x].end(); i++)
        {
            if (*i == Key)
            {
                break;
            }
        }

        if (i != map[x].end())
        {
            map[x].erase(i);
        }
    }

    void print()
    {
        for (int i = 0; i < total_elements; i++)
        {
            cout << "Index " << i << ": ";
            for (int j : map[i])
            {
                cout << j << " => ";
            }
            cout << endl;
        }
    }
};

int main()
{

    HashMap mp(3);

    int arr[] = {2, 4, 5, 6, 7};
    for (int i = 0; i < 5; i++)
    {
        mp.insert(arr[i]);
    }

    cout << " HashMap " << endl;
    mp.print();

    mp.remove(5);

    return 0;
}