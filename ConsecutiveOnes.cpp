#include<iostream>
using namespace std;
int countOnes(int arr[],int n)
{
    int res=0;
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = i; j < n; j++)
        {
            if(arr[j]==0)
            break;

            count++;
            res=max(count,res);
           
            }
        }
        return res;
        
    }
    


int main()
{
    int arr[]={0,1,1,1,1,1,0,1,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<countOnes(arr,size);
    return 0;
}