#include<iostream>
using namespace std;

int check_if_bit_is_set(int n,int t)
{
  if((n>>(t))&1)
    return 1;
  else
    return 0;

}


int main()
{
    int n,t,k;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"Enter the position of the bit you want check from right"<<endl;
    cin>>t;
    k=check_if_bit_is_set(n,t);
    cout<<"The bit is "<<k<<endl;


}
