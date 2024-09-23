// Waive Solution(Not so efficient)
// Time Complexity = Average(a*b)
// Space Complexity =Average(1)

// #include<iostream>
// using namespace std;
// int LcmNumbers(int a,int b)
// {
//     int ans=a>b?a:b;
//     for (int i = ans; i <=a*b; i++)
//     {
//         if ((i%a==0)and(i%b==0))
//         {
//             return i;
//         }

//     }

// }
// int main()
// {
//     int a=4;
//     int b=6;
//     cout<<LcmNumbers(a,b);

// return 0;
// }

// Efficient Solution
//  Time Complexity = Worst(a*b)
//  Space Complexity =Average(1)

#include <iostream>
using namespace std;
int GcdNum(int a, int b);
int LcmNum(int a, int b);
int main()
{
    int a = 12, b = 15;
    cout << LcmNum(a, b);
    return 0;
}
int LcmNum(int a, int b)
{
    return (a * b) / GcdNum(a, b);
}
int GcdNum(int a, int b)
{
    if (b > a)
    {
        int temp = a;
        a = b, b = temp;
        if (b == 0)
        {
            return a;
        }
        return GcdNum(b, a % b);
    }
    else
    {
        if (b == 0)
        {
            return a;
        }
        return GcdNum(b, a % b);
    }
}