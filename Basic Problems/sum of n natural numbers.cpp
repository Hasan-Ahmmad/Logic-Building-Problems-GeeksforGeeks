#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int Sum(int n)
{
    if(n==1)
    { 
        return 1;
    }    
    return n + Sum(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    cout<<Sum(n)<<endl;
    
    return 0;
}
