#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int i=1;
   while(i<=t)
   {
       vector<long long>vec;
      long long a,b,c;
      cin>>a>>b>>c;
      vec.push_back(a);
      vec.push_back(b);
      vec.push_back(c);
      sort(vec.begin(),vec.end());
      //reverse(vec.begin(),vec.end());
      if(vec[0]+vec[1]>vec[2])
      {
          if(vec[0]==vec[1] && vec[1]==vec[2])
            cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
          else if(vec[0]==vec[1] || vec[0]==vec[2] || vec[1]==vec[2])
            cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
          else
            cout<<"Case "<<i<<": "<<"Scalene"<<endl;
      }
      else
         cout<<"Case "<<i<<": "<<"Invalid"<<endl;

      i++;


   }

    return 0;

}
