// Iterative Appraoch
// Time Complexity : Average(log10(n)) 
// Space Complexity : Average(1)

// #include <iostream>
// using namespace std;
// int count(int n){
//     int c=0;
//     while(n>0){
//         c++;
//         n=n/10;
//     }
//     return c;
// }
// int main()
// {
//     int n=23134;
//     cout<<count(n)<<"\n";
//     return 0;
// } 


//Recursive Approach
//Time Complexity : Average(log10(n))
//Space Complexity : Average(1)

// #include<iostream>
// using namespace std;
// int count(int n)
// {
//     static int c=0;
//     if(n>0)
//     {
//         c++;
//         return count(n/10);
//     }
//     return c;
// }
// int main()
// {
//     int n=2313478;
//     cout<<count(n)<<"\n";

// return 0;
// }

//Best Approach
// Time Complexity : Average(1) 
// Space Complexity : Average(1)

#include<iostream>
using namespace std;
int main()
{
    int n=234561;
    cout<<floor(1+(log10(n)))<<"\n";
    
return 0;
}
