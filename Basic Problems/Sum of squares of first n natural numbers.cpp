// Using recursion

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int ans=0;
int Sum(int n)
{
    if(n==0)
    { 
       return ans;
    }    
    return n*n + Sum(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    cout<<Sum(n)<<endl;
    
    return 0;
}

// Using formula

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int Sum(int n)
{   // To avoid overflow || Main formula => n*(n+1)*(2*n+1)/6
    return (n*(n+1)/2) * (2*n+1)/3;  
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    cout<<Sum(n)<<endl;
    
    return 0;
}
