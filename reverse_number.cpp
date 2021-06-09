#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,rem=0,rev=0;
    cin>>num;
    while(num)
    {
        rem=num%10;
        rev=rev*10 + rem;
        num=num/10;

    }
    cout<<rev;
}
