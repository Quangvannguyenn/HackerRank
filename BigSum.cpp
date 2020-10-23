#include<iostream>
using namespace std;
int main()
{
    long long A[5];
    long long sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    long long Sum[5];
    for(int i=0;i<5;i++)
    {
       Sum[i]=sum-A[i];
    }
    long long Max=Sum[0];
    
    for(int i=0;i<5;i++)
    {
        if(Max<Sum[i])
        {
            Max=Sum[i];
        }
    }
    long long Min=Sum[0];
    for(int i=0;i<5;i++)
    {
        if(Min>Sum[i])
        {
            Min=Sum[i];
        }
    }
    cout<<Min<<" "<<Max;
    return 0;
}