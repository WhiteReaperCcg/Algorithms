#include <iostream>
#include <fstream>
#include <cstdlib>

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

    for (size_t i = 0; i < array_size(array); i++)
    {
        int value;
        file >> value;

        array_set(array, i, value);
    }

    int minDifference = -1;

    for (size_t i = 0; i < array_size(array); i++)
    {
        int first = array_get(array, i);

        if (first % 2 == 0)
        {
            for (size_t j = i + 1; j < array_size(array); j++)
            {
                int second = array_get(array, j);

                if (second % 2 == 0)
                {
                    int difference = abs(first - second);

                    if (minDifference == -1 || difference < minDifference)
                    {
                        minDifference = difference;
                    }
                }
            }
        }
    }

    cout << minDifference << endl;

    array_delete(array);

    return 0;
}