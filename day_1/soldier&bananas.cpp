#include<iostream>
using namespace std;
int main()
{
    int k,w,n,borrow;
    int sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum+=(i*k);
    }
    if(sum>n)
    {
        borrow=(sum-n);
    }
   else if(sum<=n){
       borrow =0;
}
cout<<borrow;
    return 0;
}