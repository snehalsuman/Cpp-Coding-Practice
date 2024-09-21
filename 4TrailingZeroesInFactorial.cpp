//Waive Solution(Not so efficient)
//Time Complexity = Average(n)
//Space Complexity =Average(1)


// #include<iostream>
// using namespace std;
// int CountZeroes(int n)
// {
//     int res=1;
//     for (int i = 2; i <= n; i++)
//     {
//         res=res*i;
//     }
//     int ans=0;
//     while(res%10==0)
//     {
//         ans++;
//         res=res/10;
//     }
//     return ans;
    
// }
// int main()
// {
//     int n=10;
//     cout<<CountZeroes(n);



// return 0;
// }


//Efficient Solution
//Time Complexity = Average(n)
//Space Complexity =Average(1)

// #include<iostream>
// using namespace std;
// int CountTrailingZeroes(int n)
// {
//     int res=0;
//     for (int i = 5; i <=n; i=i*5)
//     {
//         res=res+n/i;
//     }
//     return res;
    
// }
// int main()
// {
//     int n=6;
//     cout<<CountTrailingZeroes(n);


// return 0;
// }

