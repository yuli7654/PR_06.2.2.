#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "functions.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand((unsigned)time(NULL));

    const int n = 10;
    int a[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High, 0);

    cout << "Масив:" << endl;
    Print(a, n, 0);

    double avg;
    if (AverageIndexEven(a, n, avg))
        cout << "Середнє арифметичне індексів парних елементів = " << avg << endl;
    else
        cout << "Парних елементів у масиві немає" << endl;

    return 0;
}