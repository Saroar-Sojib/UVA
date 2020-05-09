#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b,c;

  while(cin>>a>>b>>c)
  {
      if(a==0 && b==0 && c==0)return 0;
      else
      {
          if(pow(a,2)==pow(b,2)+pow(c,2))cout<<"right"<<endl;
   else   if(pow(b,2)==pow(a,2)+pow(c,2))cout<<"right"<<endl;
   else   if(pow(c,2)==pow(b,2)+pow(a,2))cout<<"right"<<endl;
   else
    cout<<"wrong"<<endl;
      }
  }


    return 0;

}
