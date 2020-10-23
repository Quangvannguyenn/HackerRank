#include<iostream>
#define Max 1000
using namespace std;
int main()
{
    int A[Max];
    int n;
    do
    {
        cin>>n;
    } while (n<=0);
    for(int i=0;i<n;i++)
    {
        do
        {
            cin>>A[i];
        } while (A[i]>1000);
    }
    int Sum=0;
    for(int i=0;i<n;i++)
    {
       Sum+=A[i];
    }
    return 0;
}