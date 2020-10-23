#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cin>>n;
    } while (n<1||n>60);
    
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
      if(A[i]>=38)
      {
          if(A[i]%5==0)
          {
              cout<<A[i]<<"\n";
          }
          else
          {
              int count=0;
              for(int j=1;j<3;j++)
              {
                  if((A[i]+j)%5==0)
                  {
                      cout<<A[i]+j<<"\n";
                      count++;
                      break;
                  }
              }
              if(count==0)
              {
                  cout<<A[i]<<"\n";
              }
          }
          
      }
      else
      {
          cout<<A[i]<<"\n";
      }
          
    }
}