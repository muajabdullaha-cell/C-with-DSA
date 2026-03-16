// decimal to binary
#include <iostream>
using namespace std;
int decToBinary(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main()
{
    int decnum = 50;
    for (int i = 1; i <= 10; i++)

        cout << decToBinary(i) << endl;
    return 0;
}
// binary to decimal
#include <iostream>
using namespace std;

int binarytodecNum(int binary)
{
    int ans = 0, pow = 1;
    while (binary > 0)
    {
        int rem = binary % 10; // last digit
        ans += rem * pow;      // decimal calculation
        pow *= 2;              // move to next power of 2
        binary /= 10;          // remove last digit
    }
    return ans;
}

int main()
{
    cout << binarytodecNum(11100) << endl; // output: 28
    return 0;
