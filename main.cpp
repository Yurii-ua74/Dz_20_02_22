#include"Head.h"

int main()
{
    setlocale(0, "");
    srand(time(0));
    const int size = 20;
    int arr[size] = {};
    cout << " элементы массива \n";
    Rand(arr, size);
    Print(arr, size);
    Scatter(arr, size);
    //
    uint32_t j;
    int num = rand() % size;
    int position = 0;
    cout << "\nслучайное число \n";
    cout << num << endl;
    cout << "\nпозиция случайного числа \n";
    for (j = 0; j < size; j++)
    {
        if (arr[j] == num)
        {
            position = j;
            cout << position + 1 << endl;
        }
    }
    Descending(arr, size, position);
    Increase(arr, size, position);
    cout << "от числа " << num << " массив отсортирован слева по убыванию, справа по возрастанию\n";
    Print(arr, size);

    return 0;
}