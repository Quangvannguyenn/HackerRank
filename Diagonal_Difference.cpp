#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    int S1=0;
    int S2=0;
    for(int i=0;i<n;i++)
    {
        S1+=A[i][i];
        S2+=A[n-1-i][i];
    }
    cout<<abs(S1-S2);
}