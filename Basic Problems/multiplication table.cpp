#include<bits/stdc++.h>
using namespace std;

void Multi(int n, int i=1)
{
    if(i==11) return;
    cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    Multi(n,i+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    Multi(n);
    return 0;
}
