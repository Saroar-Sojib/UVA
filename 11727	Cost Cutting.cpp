#include<bits/stdc++.h>
using namespace std;

int main()
{

   int t;
   cin>>t;
   int i=1;
   while(i<=t)
   {
       vector<int>vec;
       int a,b,c;
       cin>>a>>b>>c;
       vec.push_back(a);
       vec.push_back(b);
       vec.push_back(c);
        sort(vec.begin(),vec.end());
        cout<<"Case "<<i<<": "<<vec[1]<<endl;
        i++;
   }

    return 0;

}
