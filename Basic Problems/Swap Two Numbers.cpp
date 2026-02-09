#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b; cin>>a>>b;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;

    // 1) with third variable 
    // int temp=a;
    // a=b;
    // b=temp;

    // 2) built-in-funtion 
    // swap(a,b);

    // 3) without third variable
    // a=a+b;
    // b=a-b;
    // a=a-b;

    // 4) using XOR logic
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    return 0;
}
