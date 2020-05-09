#include<bits/stdc++.h>
using namespace std;
long long digit(long long n)
{
    long long reminder,answer=0;
    while(n!=0)
    {
        reminder=n%10;
        answer=answer+reminder;
        n=(n/10);
    }
    return answer;
}
int main()
{
    while(true)
    {
        long long n;
    cin>>n;
    if(n==0)return 0;
    else
    {
        long long p=n;
    long long answer;
    while(true)
    {
        answer=digit(p);
        if(answer<10)
        {
            cout<<answer<<endl;
            break;
        }
        else
        {
            p=answer;
        }
    }
    }


    }
    return 0;

}
