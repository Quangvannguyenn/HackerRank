#include<iostream>
using namespace std;
int main()
{
  long x1,v1;
  long x2,v2;
  do
  {
      cin>>x1;
            
  } while (x1<0||x1>10000);
  do
  {
      cin>>v1;
  } while (v1<1||v1>10000);
  do
    {
      cin>>x2;
    } while (x2<=x1);
    do
    {
        cin>>v2;
    } while (v2<1||v2>10000);
    
  long Sum1=x1+v1;
  long Sum2=x2+v2;
  while(Sum1!=Sum2)
      {
          Sum1=Sum1+v1;
          Sum2=Sum2+v2;
          if(Sum1>2000000000||Sum2>2000000000)
          {
             break;
          }
      }
  if(Sum1==Sum2)
  {
      cout<<"YES";
  }
  else
  {
      cout<<"NO";
  }  
}