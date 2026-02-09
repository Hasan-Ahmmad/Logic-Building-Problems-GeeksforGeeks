#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a1, a2, n; cin>>a1>>a2>>n;
    cout<<(n-1)*(a2-a1) + a1;
    return 0;
}
