#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Vector
{
    T *array;
    int capacity;
    int noOfElements;

public:
    Vector()
    {
        array = new T[1];
        capacity = 1;
        noOfElements = 0;
    }

    void push(T data)
    {
        if (noOfElements == capacity)
        {
            T *temp = new T[2 * capacity];

            for (int i = 0; i < capacity; i++)
            {
                temp[i] = array[i];
            }

            delete[] array;
            capacity = 2 * capacity;
            array = temp;
        }

        array[noOfElements] = data;
        noOfElements++;
    }

    void push(T data, int index)
    {
        if (index == capacity)
        {
            push(data);
        }
        else
        {
            array[index] = data;
        }
    }

    T get(int index)
    {
        if (index < noOfElements)
        {
            return array[index];
        }
    }

    void pop()
    {
        noOfElements--;
    }

    int size()
    {
        return noOfElements;
    }

    int getCapacity()
    {
        return capacity;
    }

    void print()
    {
        for (int i = 0; i < noOfElements; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    Vector<int> v;
    Vector<char> v2;

    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);

    v2.push(69);
    v2.push(70);
    v2.push(80);
    v2.push(90);

    cout << "vec size: " << v.size() << endl;
    cout << "vec capacity: " << v.getCapacity() << endl;
    cout << "vec print: ";
    v.print();
    return 0;
}