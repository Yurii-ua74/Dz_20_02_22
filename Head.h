#pragma once
#include<iostream>
#include <ctime>

using namespace std;

//+------------------------------------
void RandMinus(int arr[], uint32_t _size)
{
    for (size_t i = 0; i < _size; i++)
    {
        arr[i] = rand() % (-20 - 20) - 20;
    }
}
//+------------------------------------
void Print(int arr[], uint32_t _size)
{
    for (size_t i = 0; i < _size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
//+-----------------------------------
void BetweenMinusSort(int arr[], uint32_t _size)
{
    int left = 0, right = 0, temp;
    bool ban = true;
    for (uint32_t i = 0; i < _size; i++)
    {
        if (ban == true && arr[i] < 0)
        {
            left = i;
            ban = false;
        }
        if (arr[i] < 0) right = i;
    }
    cout << "крайние минусовые значения \n";
    cout << arr[left] << " & " << arr[right] << endl;
    //
    for (uint32_t i = left; i <= right; i++)
    {
        for (uint32_t j = left; j < right - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//+------------------------------