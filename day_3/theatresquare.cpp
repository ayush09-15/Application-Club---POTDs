#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long number=ceil((n*1.0)/a)*ceil((m*1.0)/a);
    cout<<number<<endl;
    return 0;
}