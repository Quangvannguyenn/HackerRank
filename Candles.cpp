#include<iostream>
using namespace std;
int main()
{
    long n;
    do
    {
        cin>>n;
    } while (n<=1||n>100000);
    long *A= new long[n];
    for(long i=0;i<n;i++)
    {
        cin>>A[i];
    }
    long Max=A[0];
    for(long i=0;i<n;i++)
    {
        if(Max<A[i])
        {
            Max=A[i];
        }
    }
    long count=0;
    for(long i=0;i<n;i++)
    {
        if(A[i]==Max)
        {
            count++;
        }
    }
    cout<<count;
}