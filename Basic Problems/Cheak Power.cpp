#include<bits/stdc++.h>
using namespace std;

bool isPower(int x,int y){
    if(y==1) return true;
    if(x==1) return (y==1);
    while(y%x==0)
    {
        y=y/x;
    }
    return (y==1);
}

int main(){

    int x,y; cin>>x>>y;
    if(isPower(x,y)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}
