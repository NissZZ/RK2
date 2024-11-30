#include <iostream>
using namespace std;


int* Merge(int* v1, int* v2, int size_v1, int size_v2)
{
    int* result = new int[size_v1 + size_v2];
    for (int i = 0; i < size_v1; i++)
    {
        result[i] = v1[i];
    }
    for (int i = 0; i < size_v2; i++)
    {
        result[i + size_v1] = v2[i];
    }
    return result;
}
