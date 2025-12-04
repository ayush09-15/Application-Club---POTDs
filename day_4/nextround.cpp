/*"Contestant who earns a score equal to or greater than the k-th place finisher's score 
will advance to the next round, as long as the contestant earns a positive score..." 
— an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their 
scores. Calculate how many participants will advance to the next round.*/
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0){
        if(a[i]>=a[k-1])
        {
            c++;
        }}
    }
    cout<<c;
    return 0;
}