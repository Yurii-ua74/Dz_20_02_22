#include "Head.h"

int main()
{
    setlocale(0, "");
    srand(time(0));
    const int size = 10;
    int arr[size] = {};
    int i, n;

    cout << " �������� ������� \n";
    Rand(arr, size);
    Print(arr, size);
    cout << " ������� ������ ������� ������� \n";
    cout << " ��� ���������� ������� �� �������� �������  1 \n";
    cout << " ��� ���������� ������� �� ����������� �������  0 \n";
    cin >> n;
    foo(arr, size, n);
    Print(arr, size);

    return 0;
}