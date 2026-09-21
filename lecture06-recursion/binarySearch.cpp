#include <iostream>
using namespace std;

int binarySearch(const int anArray[], int first, int last, int target)
{
    int index;

    if (first > last)
        index = -1;   // target not in array
    else
    {
        int mid = first + (last - first) / 2;

        if (target == anArray[mid])
            index = mid;   // target found
        else if (target < anArray[mid])
            index = binarySearch(anArray, first, mid - 1, target);
        else
            index = binarySearch(anArray, mid + 1, last, target);
    }

    return index;
}

int main()
{
    int anArray[] = {3, 7, 12, 18, 24, 31, 39, 45, 52, 60, 71};
    int size = 11;

    // Test case 1: target is in the array
    int target = 45;

    int index = binarySearch(anArray, 0, size - 1, target);

    cout << "Searching for " << target << ": ";
    if (index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not found" << endl;


    // Test case 2: target is not in the array
    target = 30;

    index = binarySearch(anArray, 0, size - 1, target);

    cout << "Searching for " << target << ": ";
    if (index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
