#include<iostream>
#define Max 10
using namespace std;
int main()
{
    unsigned long long A[Max];
    int n;
    do
    {
        cin>>n;
    } while (n<1||n>10);
    unsigned long long Sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        Sum+=A[i];
    }
    cout<<Sum;
}