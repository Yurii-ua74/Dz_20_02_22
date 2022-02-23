#include "Head.h"

int main()
{
    setlocale(0, "");
    srand(time(0));
    const int size = 10;
    int arr[size] = {};
    cout << " элементы массива \n";
    RandMinus(arr, size);
    Print(arr, size);
    BetweenMinusSort(arr, size);
    cout << " элементы массива после сортировки\n";
    Print(arr, size);

    return 0;
}