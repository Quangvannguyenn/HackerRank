#include<iostream>
using namespace std;
int main()
{
    int A[3];
    int B[3];
    for(int i=0;i<3;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>B[i];
    }
    int dem1=0,dem2=0;
    for(int i=0;i<3;i++)
    {
        if(A[i]>B[i])
        {
           dem1++;
        }
        else if(A[i]<B[i])
        {
            dem2++;
        }
    }
    cout<<dem1<<" "<<dem2;
    return 0;
}