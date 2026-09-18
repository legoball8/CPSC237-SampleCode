#include <iostream>
using namespace std;

void printUp(int n)
{
    //to do
    if (n == 1) {
        cout << 1 << ", ";
    }
    else {
        printUp(n - 1);
        cout << n << ", ";
    }
}

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    printUp(n);

    return 0;
}