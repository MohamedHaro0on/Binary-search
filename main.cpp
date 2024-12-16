#include "BinarySearch.h"

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    BinarySearch<int> arr(n);

    arr.inputArray();

    // Input the target element to search
    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    // Perform the binary search
    int result = arr.search(target);

    // Output the result
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
