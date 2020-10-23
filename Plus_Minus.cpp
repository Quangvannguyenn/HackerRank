#include<iostream>
#define Max 1000
using namespace std;
void Plus_Minus(int A[],int n)
{
    int dem1=0;
    int dem2=0;
    int dem3=0;
  for(int i=0;i<n;i++)
  {
    if(A[i]>0)
    {
        dem1++;
    }
    else if(A[i]<0)
    {
        dem2++;
    }
    else
    {
        dem3++;
    }
  }
  cout<<(float)dem1/n<<"\n";
  cout<<(float)dem2/n<<"\n";
  cout<<(float)dem3/n;
}
int main()
{
    int A[Max];
    int n;
    do
    {
        cin>>n;
    } while (n<=0||n>100);
    for(int i=0;i<n;i++)
    {
        do
        {
            cin>>A[i];
        } while (A[i]<-100||A[i]>100);
        
    }
    Plus_Minus(A,n);
    return 0;    
}