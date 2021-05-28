#include<iostream>
using namespace std;

int main()
{
   char ch,ch1;
   cout<<"Enter a character"<<endl;
   cin>>ch;
   ch1=ch & (~32);
   cout<<ch1;
   //binary and the input character with the not of 32

}
