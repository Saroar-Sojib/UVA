#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int arr[n+1];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int count=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n-i-1;j++)
           {
               if(arr[j]>arr[j+1])
               {
                   swap(arr[j],arr[j+1]);
                   count++;
               }
           }
       }
       cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;

   }

    return 0;

}
