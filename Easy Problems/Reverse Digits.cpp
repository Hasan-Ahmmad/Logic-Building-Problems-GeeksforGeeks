#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    while(n>0)
    {
        cout<<n%10;
        n=n/10;
    }
    cout<<endl;
    return 0;
}
