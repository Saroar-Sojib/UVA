#include<bits/stdc++.h>
using namespace std;
int result(int a,int b)
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{

   int t;
   cin>>t;
   int i=1;
   while(i<=t)
   {
       int a,b;
       cin>>a>>b;
       cout<<"Case "<<i<<": "<<result(a,b)<<endl;
       i++;
   }

    return 0;

}
