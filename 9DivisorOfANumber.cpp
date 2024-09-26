//Most efficient code
//Time complexity=Average(n(pow(1,2)))
//Space complexity=Average(1)

#include<iostream>
using namespace std;
void print(int n)
{
    for (int i = 0; i <=sqrt(n); i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    

for (int i =sqrt(n)-1; i >=1; i--)
{
    if(n%i==0)
    {cout<<n/i<<" ";}
}
}
int main()
{
    int n=15;
    print(n);


return 0;
}


//GFG

// class solution{
//     public:
//     void print_divisors(int n){
//         if(n==1){cout<<n<<" ";
//         return;}
//         for(int i=1;i*i<=n;i++){
//             if(n%i==0) cout<<i<<" ";
//         }
//         for (int i=sqrt(n);i>=1;i--){
//             if(n%i==0){
//                 if(n/i!=i)
//                 cout<<n/i<<" ";}
//             }
//         }
//     }
