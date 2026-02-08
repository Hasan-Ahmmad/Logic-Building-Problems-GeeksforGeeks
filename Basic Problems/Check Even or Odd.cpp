#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    if((n & 1) == 0) // the last digit of even in binary is 0 & odd is 1. 
    {
        cout<<"true";
    }
    else
    { 
        cout<<"false";
    }    
    return 0;
}
