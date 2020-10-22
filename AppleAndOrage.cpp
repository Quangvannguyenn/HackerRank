#include<iostream>
using namespace std;
void Enter(long *q,long *w)
{
    do
    {
        cin>>*q>>*w;
    } while (*q<1||*q>100000||*w<1||*w>100000);
    
}
int main()
{
    long s,t,a,b,m,n;   
    Enter(&s,&t);
    Enter(&a,&b);
    Enter(&m,&n);
    long *A=new long[m];
    long *B=new long[n];
    for(long i=0;i<m;i++)
    {
        cin>>A[i];
    }
    for(long i=0;i<n;i++)
    {
        cin>>B[i];
    }
    long count_Apple=0;
    for(long i=0;i<m;i++)
    {
        long Sum_Apple=a+A[i];
        if(Sum_Apple>=s&&Sum_Apple<=t)
        {
            count_Apple++;
        }
    }
    long count_Orange=0;
    for(long i=0;i<n;i++)
    {
        long Sum_Orange=b+B[i];
        if(Sum_Orange>=s&&Sum_Orange<=t)
        {
            count_Orange++;
        }
    }
    cout<<count_Apple<<"\n";
    cout<<count_Orange;
    return 0;
}