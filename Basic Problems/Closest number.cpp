#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin>>n>>m;
    int i=n-1;
    while(true)
    {
        if(i%m==0)
        {
            cout<<i<<endl;
            break;
        }
        i--;
    }
    return 0;
}
