// Waive Solution(Not so efficient)
// Time Complexity = Average(1)
// Space Complexity =Average(1)

// Euclidean Algorithm(Efficient)
// Time Complexity = Average(n)
// Space Complexity =Average(1)

// #include<iostream>
// using namespace std;
// int gcdRecursive(int a,int b)
// {
//     while (a!=b)
//     {
//         /* code */

//     int ans=a>b?a:b;
//     if (ans==a)
//     {
//         return gcdRecursive(a-b,b);
//     }
//     else{
//         return gcdRecursive(a,b-a);
//     }
//     }
//     return a;

// }
// int main()
// {
//     int a=18;
//     int b=15;
//     cout<<gcdRecursive(a,b);

// return 0;
// }

/*
#include <iostream>
    using namespace std;
int maxPiecess(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(maxPiecess(n - a, a, b, c), max(maxPiecess(n - b, a, b, c), maxPiecess(n - c, a, b, c)));
    if (res == -1)
        return -1;
    return res + 1;
}
int main()
{
    int n = 5, a = 1, b = 5, c = 2;
    cout << maxPiecess(n, a, b, c);
    return 0;
}
*/


#incl?


// #include <iostream>
// using namespace std;
// void permutes(string str, int i, int j)
// {
//     if (i == j - 1)
//     {
//         cout << str << " ";
//         return;
//     }
//     else
//     {
//         for (int k = i; k <= j - 1; k++)
//         {
//             swap(str[i], str[k]);
//             permutes(str, i + 1, j);
//             swap(str[i], str[k]);
//         }
//     }
// }
// int main()
// {
//     string str = "ABCD";
//     permutes(str, 0, 4);
//     return 0;
// }