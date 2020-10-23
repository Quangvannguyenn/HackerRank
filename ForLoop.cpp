#include<iostream>
using namespace std;
int main()
{
    string A[9]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    do
    {
        cin>>a>>b;
    } while (a<1||b<1);
    for(int i=a;i<=b;i++)
    {
        if(i<=9)
        {
            cout<<A[i-1]<<"\n";
        }
        else
        {
            if(i>9)
            {
                if(i%2==0)
                {
                    cout<<"even"<<"\n";
                }
                if(i%2!=0)
                {
                    cout<<"odd"<<"\n";
                }
            }
        }
        
    }
}