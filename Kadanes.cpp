#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void kadanealgo(int *arr,int n)
{
    ll cur_sum=0;
    ll soln=INT_MIN;
    for(int i=0;i<n;i++){
        cur_sum+=arr[i];
        soln=max(soln,cur_sum);
        if(cur_sum<0){
            cur_sum=0;
        }
    }
    cout<<soln<<"\n";
}
int main()
{
    int m;
    cin>>m;
    int arr[m+1];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    kadanealgo(arr,m);
    return 0;
}
