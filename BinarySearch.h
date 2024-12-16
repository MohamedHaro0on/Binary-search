#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <iostream>
using namespace std;

template <typename T>
class BinarySearch
{
private:
    T *arr;
    int size;

public:
    BinarySearch(int n);

    ~BinarySearch();

    void inputArray();

    int search(T target);
};

#endif
