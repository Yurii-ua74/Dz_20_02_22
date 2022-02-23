#pragma once
#include<iostream>
#include <ctime>

using namespace std;

//+------------------------------------
void Rand(int arr[], uint32_t _size)
{
    //srand(time(0));
    for (size_t i = 0; i < _size; i++)
    {
        arr[i] = rand() % 20;
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
void foo(int arr[], uint32_t _size, int n = 1)
{
    uint32_t i, j;
    int temp;
    switch (n)
    {
    case 1:
    {
        for (i = 0; i < _size; i++)
        {
            for (j = 0; j < _size - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    break;
    case 2:
    {
        for (i = 0; i < _size; i++)
        {
            for (j = 0; j < _size - 1; j++)
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
    break;
    }
}
//+------------------------------