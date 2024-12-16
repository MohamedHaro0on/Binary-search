#ifndef BINARYSEARCH_CPP
#define BINARYSEARCH_CPP

#include "BinarySearch.h"

template <class T>
BinarySearch<T>::BinarySearch(int n)
{
    size = n;
    arr = new T[size];
}

template <class T>
BinarySearch<T>::~BinarySearch()
{
    delete[] arr;
}

template <class T>
void BinarySearch<T>::inputArray()
{
    cout << "Enter " << size << " elements in sorted order:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
}

template <class T>
int BinarySearch<T>::search(T target)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

template class BinarySearch<int>;
#endif
