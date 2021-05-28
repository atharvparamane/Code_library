#include<iostream>
using namespace std;

int count_of_setbits(int m)
{
  int cnt=0;
  while(m)
  {
   cnt=cnt+ (m&1);
   m>>=1;
  }
  return cnt;

}
int main()
{
 int n,m,k;
 cout<<"Enter a number"<<endl;
 cin>>m;
 k=count_of_setbits(m);
 cout<<"The number of setbits in "<<m<<" are "<<k<<endl;

}

