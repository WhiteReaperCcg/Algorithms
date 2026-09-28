#include <iostream>
#include <fstream>

#include "array.h"
using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        return 1;
    }

    ifstream file(argv[1]);

    if (!file.is_open())
    {
        return 1;
    }

    size_t size;
    file >> size;

    Array* array = array_create(size);

    for (size_t i = 0; i < size; i++)
    {
        int value;
        file >> value;

        array_set(array, i, value);
    }

    long long sum = 0;

    for (size_t i = 0; i < size; i++)
    {
        sum += array_get(array, i);
    }

    size_t count = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (array_get(array, i) > sum)
        {
            count++;
        }
    }

    cout << count << " ";

    for (size_t i = 0; i < size; i++)
    {
        if (array_get(array, i) > sum)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    array_delete(array);

    return 0;
}