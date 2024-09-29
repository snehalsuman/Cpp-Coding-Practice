// Most efficient code
// Time complexity=Average(log n)
// Space complexity=Average(log n)

#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if ((n % i == 0) || n % (i + 2 == 0))
        {
            return false;
        }
    return true;
}
int nextPrime(int n)
{
    n++;
    if (isPrime(n))
    {
        return n;
    }
    return nextPrime(n);
}
int main()
{
    int n = 7;
    cout << nextPrime(n);

    return 0;
}