#include "Head.h"

int main()
{
    setlocale(0, "");
    srand(time(0));
    const int size = 10;
    int arr[size] = {};
    int i, n;

    cout << " элементы массива \n";
    Rand(arr, size);
    Print(arr, size);
    cout << " введите третий элемент функции \n";
    cout << " для сортировки массива по убыванию нажмите  1 \n";
    cout << " для сортировки массива по возрастанию нажмите  0 \n";
    cin >> n;
    foo(arr, size, n);
    Print(arr, size);

    return 0;
}