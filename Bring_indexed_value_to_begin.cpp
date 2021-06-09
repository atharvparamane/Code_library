#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ind,t;
    cin>>n>>ind;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    t=arr[ind-1];
    arr1[0]=t;
    for(int j=0;j<n;j++)
    {
        if(j==ind-1)
        {
         arr1[j+1]=arr[j+1];
        }
        else{
        arr1[j+1]=arr[j];}

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" " ;
    }


}
