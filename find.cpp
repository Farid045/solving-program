#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    int count=0,flag=0;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        count++;
        if(a<0)
        {
            flag++;
        }
    }
    cout<<count<<endl;
    cout<<flag<<endl;
}
