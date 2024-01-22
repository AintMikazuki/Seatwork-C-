#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, factorial;

    cout << "Enter a Positive Integer: ";
    cin >> x;

    factorial = 1;

    while (x > 1) 
    {
        factorial *= x;
        x--;
    }

    cout << "The Factorial of " << x << " is: " << factorial << endl;

    return EXIT_SUCCESS;
}