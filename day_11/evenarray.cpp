#include<iostream>
using namespace std;
int main()
{
    int t,n,c,d;
    cin>>t;
    while(t--)
    {
        c=0,d=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if((i%2==0)&&(a[i]%2==1))
            {
                c++;
            }
            else if((i%2==1)&&(a[i]%2==0))
            {
                d++;
            }
        }
        if(c!=d)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    return 0;
}