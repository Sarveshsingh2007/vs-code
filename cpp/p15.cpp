#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(;j<=n+i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(;j<=n+i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}