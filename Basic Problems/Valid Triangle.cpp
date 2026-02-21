#include<bits/stdc++.h>
using namespace std;

void isTriangle(int a, int b, int c){
    int Max=max({a,b,c});
    if((a+b+c)-Max>Max){
        cout<<"Valid"<<endl;
    }
    else cout<<"Invalid"<<endl;
}

int main(){

    int a, b, c; 
    cin>>a>>b>>c;
    isTriangle(a,b,c);
}
