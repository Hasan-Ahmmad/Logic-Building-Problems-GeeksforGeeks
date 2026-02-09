#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool isPrime(int n)
    {
        if(n<2) return false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    isPrime(n) ? cout<<"true"<<endl : cout<<"false"<<endl;
    return 0;
}
