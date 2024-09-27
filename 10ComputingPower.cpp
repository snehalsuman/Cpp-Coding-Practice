//Most efficient code
//Time complexity=Average(log n)
//Space complexity=Average(1)


#include<iostream>
using namespace std;
int power(int a,int b)
{if(b==0)
return 1;
if(b&1)
return a*power(a,b/2)*power(a,b/2);
else return power(a,b/2)*power(a,b/2);

}
int main()
{
    int a=2;
    int b=5;
    cout<<power(a,b)<<endl;


return 0;
}