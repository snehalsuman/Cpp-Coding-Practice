//Recursive Approach
//Time Complexity = Average(n)
//Space Complexity = Average(n)


// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n==0||n==1)
//     return 1;
//     return n*fact(n-1);

// }
// int main()
// {
//     int n=6;
//     cout<<fact(n)<<endl;


// return 0;
// }


//Iterative Approach
//Time Complexity = Average(n)
//Space Complexity = average(1)

// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     int res=1;
//     if(n==0||n==1)
//     return res;
//     else{
//         for(int i=2;i<=n;i++)
//         {
//             res=res*i;
//         }
//         return res;
//     }
// }
// int main()
// {
//     int n=8;
//     cout<<fact(n)<<endl;

// return 0;
// }



#include<iostream>
using namespace std;
void permutes(string s,int idx,int len){
    if(idx==len){
        cout<<s<<" ";
        return;
    }
    for(int k=idx;k<len;k++){
        swap(s[k],s[len]);
        permutes(s,idx+1,len);
        swap(s[k],s[len]);
    }
}
int main()
{
    string s="ABC";
    int idx=0;
    int len=s.length()-1;
    permutes(s,idx,len);
return 0;
}