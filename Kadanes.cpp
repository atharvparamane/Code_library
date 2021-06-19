#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void kadanealgo(int *arr,int n)
{
    ll current_sum=0;
    ll soln=INT_MIN;
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        soln=max(soln,current_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<soln<<"\n";
}
int main()
{
    int m;
    cin>>m;
    int arr[m+1];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    kadanealgo(arr,m);
    return 0;
}
