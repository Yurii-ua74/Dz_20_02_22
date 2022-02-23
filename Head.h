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
void Scatter(int arr[], uint32_t _size)
{
    const uint32_t n = 20;
    cout << "разбросанный массив \n";
    for (uint32_t i = 0; i < n; i++)
    {
        int k = rand() % n;
        int t = arr[i];
        if (i < k)
        {
            arr[i] = arr[k];
            arr[k] = t;
        }
        cout << arr[i] << ", ";
    }
}
//+------------------------------
void Descending(int arr[], uint32_t _size, uint32_t pos)
{
    int temp;
    for (uint32_t i = 0; i < pos; i++)
    {
        for (uint32_t j = 0; j < pos - 1; j++)
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
//+------------------------------
void Increase(int arr[], uint32_t _size, uint32_t pos)
{
    int temp;
    for (uint32_t i = pos; i < _size; i++)
    {
        for (uint32_t j = pos; j < _size - 1; j++)
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
