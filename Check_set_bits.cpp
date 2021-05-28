
#include<iostream>
using namespace std;


int count_set_bits(int k)
{
    int cnt=0;
    while(k)
    {
     k=k & (k-1);
     cnt++;
    }
    return cnt;
}

int main()
{
  int n,t;
  cout<<"Enter a number"<<endl;
  cin>>n;
  t=count_set_bits(n);
  cout<<"The number of set bits in "<<n<<" are "<<t<<endl;



}
