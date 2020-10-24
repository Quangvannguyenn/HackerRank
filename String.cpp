#include<iostream>
using namespace std;
int main()
{
   string a;
   string b;
   cin>>a>>b;
   cout<<a.size()<<" "<<b.size()<<"\n";
   string c=a+b;
   cout<<c<<"\n";
   char m=a[0];
   a[0]=b[0];
   b[0]=m;
   cout<<a<<" "<<b;
}