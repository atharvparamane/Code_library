#include<iostream>
using namespace std;

int clear_a_bit(int m, int n)
{
    return (m & (~(1 << (n))));
}
int main()
{
 int n,m,k;
 cout<<"Enter a number"<<endl;
 cin>>m;
 cout<<"Enter a position of bit to clear from right"<<endl;
 //The position index starts from 0
 cin>>n;
 k=clear_a_bit(m,n);
 cout<<"The number after clearing the bit is "<<k<<endl;


}
