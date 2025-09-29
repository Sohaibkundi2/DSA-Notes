#include <iostream>
using namespace std;

void decToBin(int n)
{
    int num = n;
    int pow = 1, ans = 0, rem;

    while (num > 0)
    {

        rem = num % 2;
        num = num / 2;
        ans += (pow * rem);
        pow *= 10;
    }
    cout << "The Binary code of " << n << " is " << ans << endl;
}

void binToDec(int n)
{
    int bin = n;
    int pow = 1, ans = 0, rem;

    while (bin > 0)
    {

        rem = bin % 10;
        bin /= 10;
        ans = ans + (rem * pow);
        pow *= 2;
    }
    cout << "The Decimal code of " << n << " is " << ans << endl;
}
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        decToBin(i);
    }

    cout << "*****************************" << endl;
    int binaries[] = {1000, 1001, 1010};
    for (int i = 0; i < 3; i++)
    {
        binToDec(binaries[i]);
    }
    return 0;
}