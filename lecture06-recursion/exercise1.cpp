#include <iostream>
using namespace std;

/**
 * Computes the sum of the integers from 1 through n.
 *
 * @pre n > 0.
 * @post None.
 * @param n A positive integer.
 * @return The sum 1 + 2 + ... + n.
 */
int sumUpTo(int n)
{
    // Base case: What should happen when n == 1?
    if (n == 1) {
        return 1;
    }
    // Recursive case: How can you express
    // sumUpTo(n) in terms of sumUpTo(n - 1)?
    else {
        return sumUpTo(n - 1) + n;
    }
}

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "The sum from 1 to " << n << " is "
         << sumUpTo(n) << endl;

    return 0;
}
