#include<iostream>
#define max 1000
using namespace std;
int main()
{
    int A[max];
    int n;
    do
    {
        cin>>n;
    } while (n<1||n>1000);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int Max=A[0];
    int Min =A[0];
    int count_Max=0;
    int count_Min=0;
    for(int i=0;i<n;i++)
    {
        if(Max<A[i])
        {
            Max=A[i];
            count_Max++;
        }
        if(Min>A[i])
        {
            Min=A[i];
            count_Min++;
        }
    }
    cout<<count_Max<<" "<<count_Min;
}