#include <iostream>
using namespace std;

int maxArray(const int anArray[], int first, int last)
{
    // Base case: only one element
    if (first == last)
        return anArray[first];

    // Find the middle
    int mid = first + (last - first) / 2;

    // Find the maximum in each half
    int leftMax = maxArray(anArray, first, mid);
    int rightMax = maxArray(anArray, mid + 1, last);

    // Return the larger of the two
    if (leftMax > rightMax)
        return leftMax;
    else
        return rightMax;
}

int main()
{
    int anArray[] = {7, 3, 12, 5, 9, 2, 15, 6};
    int size = 8;

    cout << "Array: ";

    for (int i = 0; i < size; i++)
        cout << anArray[i] << " ";

    cout << endl;

    int largest = maxArray(anArray, 0, size - 1);

    cout << "Largest value: " << largest << endl;

    return 0;
}
