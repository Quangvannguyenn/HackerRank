#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cin>>n;
    } while (n<=0||n>100);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }

}