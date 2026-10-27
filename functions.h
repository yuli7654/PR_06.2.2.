#pragma once

// формує масив випадковими числами з діапазону [Low; High]
void Create(int* a, const int size, const int Low, const int High, int i = 0);
// виводить масив у рядок
void Print(int* a, const int size, int i = 0);
// кількість парних елементів масиву
int CountEven(int* a, const int size, int i = 0);
// сума індексів парних елементів масиву
int SumIndexEven(int* a, const int size, int i = 0);
// середнє арифметичне індексів парних елементів;
// повертає false, якщо парних елементів немає, інакше true (результат - в avg)
bool AverageIndexEven(int* a, const int size, double& avg);