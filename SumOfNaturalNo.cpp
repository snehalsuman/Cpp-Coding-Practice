// #include <iostream>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;

    
//     int sum = 0;

    
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

    
//     cout << sum << endl;

//     return 0;
// }



// Recursive for Sum of natural number

#include <iostream>
using namespace std;
int sumFirstN(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n + sumFirstN(n - 1);
}
int main()
{
    int n = 10;
    cout << sumFirstN(n);
    return 0;
}