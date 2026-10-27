#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "functions.h"

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

int CountEven(int* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] % 2 == 0)
            return 1 + CountEven(a, size, i + 1);
        else
            return CountEven(a, size, i + 1);
    }
    return 0;
}

int SumIndexEven(int* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] % 2 == 0)
            return i + SumIndexEven(a, size, i + 1);
        else
            return SumIndexEven(a, size, i + 1);
    }
    return 0;
}

bool AverageIndexEven(int* a, const int size, double& avg)
{
    int k = CountEven(a, size, 0);
    if (k == 0)
        return false;
    avg = (double)SumIndexEven(a, size, 0) / k;
    return true;
}