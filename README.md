# Binary Search Implementation in C++

This project implements a generic Binary Search class in C++ using templates. It allows users to create an array, input sorted elements, and search for a target value using the binary search algorithm.

## Files

### 1. `BinarySearch.h`
This header file defines the `BinarySearch` class template with the following members:
- **Private:**
  - `T *arr`: Pointer to dynamically allocated array.
  - `int size`: The size of the array.
- **Public:**
  - `BinarySearch(int n)`: Constructor to initialize the array size.
  - `~BinarySearch()`: Destructor to free allocated memory.
  - `void inputArray()`: Method to input sorted elements into the array.
  - `int search(T target)`: Method to perform binary search on the array for a target value.

### 2. `BinarySearch.cpp`
This file implements the methods declared in `BinarySearch.h`. Key functionality includes:
- Dynamic allocation and deallocation of the array.
- Input of sorted elements.
- Efficient binary search logic with O(log n) complexity.

### 3. `main.cpp`
This file demonstrates the usage of the `BinarySearch` class:
- Accepts the size of the array and its sorted elements from the user.
- Performs binary search for a given target and displays the result.

## Example Usage

```bash
Enter the size of the array: 5
Enter 5 elements in sorted order:
1 3 5 7 9
Enter the element to search: 7
Element found at index: 3
```

## How to Compile and Run

1. Ensure all three files (`BinarySearch.h`, `BinarySearch.cpp`, and `main.cpp`) are in the same directory.
2. Use the following command to compile:

```bash
g++ main.cpp -o binarySearch
```

3. Run the compiled program:

```bash
./binarySearch
```

## Notes
- The array must be sorted for binary search to work correctly.
- This implementation demonstrates binary search for integers but can be extended to other data types due to the use of templates.

