//Waive Solution(Not  So effiecient)
//Time complexity=Average(n)
//Space Complexity=Average(n)

// #include<iostream>
// using namespace std;
// bool isPrime(int n)
// {
//     if(n==0||n==1)
//     return false;
//     for (int i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n =13;
//     cout<<isPrime(n);
// return 0;
// }




//Most Efficient Solution
// Time Complexity=Best(1)
// Space Complexity=Averaga(1)

#include<iostream>
using namespace std;
bool isPrime(int n)
{
    if(n==0||n==1)
    return false;
    if(n==2||n==3)
    return true;
    if(n%2==0||n%3==0)
    return false;
    for (int i = 5z; i <= sqrt(n); i=i+6)
    {
        if (n%i==0||n%(i+2)==0)
        {
            return false;
        }
        
    }
    return true;
    

}
int main()
{
    int n=5;
    cout<<isPrime(n);

}
