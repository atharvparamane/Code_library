#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two numbers you want to swap"<<endl;
    cin<<x<<y;
    // Code to swap 'x' and 'y'
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "After Swapping: x =" << x << ", y=" << y;
}
