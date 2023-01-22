// THE NO DOUBLES PROBLEM

// Print the sum of two 6-sided dice rolls, each in the range ..6.
// However, if noDoubles (the third value input) is true,
// and, if the two dice show the same value, increment one die to the next value,
// wrapping around to 1 if its value was 6.

// Here are some examples.
// • inputof 2,3,true -> 5
// • inputof 3,3,true -> 7
// • inputof 3,3,false -> 6

#include <iostream>
using namespace std;

int noDoubles(int a, int b, bool dice)
{
    if (dice)
    {
        if (a == b)
        {
            if (a == 6)
            {
                b = 1;
            }
            else
            {
                b++;
            }
        }
    }
    return a + b;
}

//  *** main() to test the noDoubles() function
int main()
{

    cout << "Testing noDoubles(2, 3, true): " << noDoubles(2, 3, true) << endl;
    cout << "Testing noDoubles(3, 3, true): " << noDoubles(3, 3, true) << endl;
    cout << "Testing noDoubles(3, 3, false): " << noDoubles(3, 3, false) << endl;
}