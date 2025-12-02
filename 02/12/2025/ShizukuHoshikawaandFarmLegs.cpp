#include<iostream>
using namespace std;
int main()
{
    int t,n,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2!=0)
        {
            int c=0;
            cout<<c<<endl;
        }
        else{
            if(n%2==0&&n%4!=0)
            {
                c=0;
                for(int i=2;i<=n;i=i+4)
                {
                    c++;
                }
                cout<<c<<endl;
            }
            if(n%4==0&&n%2==0)
            {
                c=1;
                for(int i=4;i<=n;i=i+4)
                {
                    c++;
                }
                cout<<c<<endl;
            }
        }
    }
    return 0;
}