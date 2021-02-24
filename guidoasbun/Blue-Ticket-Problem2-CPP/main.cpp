#include <iostream>

/*
    You have a blue lottery ticket, with ints a, b, and c on it. This makes three pairs, which we'll call
    ab, bc, and ac. Consider the sum of the numbers in each pair. If any pair sums to exactly 10,
    the result is 10. Otherwise if the ab sum is exactly 10 more than either bc or ac sums, the result
    is 5. Otherwise the result is 0. You will print the result. Here are some samples.
    • input of 9, 1, 0 → 10
    • input of 9, 2, 0 → 0
    • input of 6, 1, 4) → 10
 */

using namespace std;

int blueTicket(int a, int b, int c);

int main() {
    cout << "Input 3 numbers: ";
    int a{0}, b{0}, c{0};
    cin >> a >> b >> c;

    cout << endl;
    cout << "Result " << blueTicket(a, b, c) << endl;
    return 0;
}

int blueTicket(int a, int b, int c)
{
    int result{0};

    if((a+b) == 10 || (b+c) == 10 || (a+c) == 10)
    {
        result = 10;
    }
    else if((a+b) >= (10 + (b+c)) || (a+b) >= (10 + (a+c)))
    {
        result = 5;
    }

    return result;
}