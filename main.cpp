#include "Head.h"

int main()
{
    setlocale(0, "");
    srand(time(0));
    const int size = 10;
    int arr[size] = {};
    cout << " �������� ������� \n";
    RandMinus(arr, size);
    Print(arr, size);
    BetweenMinusSort(arr, size);
    cout << " �������� ������� ����� ����������\n";
    Print(arr, size);

    return 0;
}