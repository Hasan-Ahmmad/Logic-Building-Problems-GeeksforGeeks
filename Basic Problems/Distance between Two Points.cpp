#include<bits/stdc++.h>
using namespace std;

double Distance(double x1,double y1, double x2, double y2){
    x1=abs(x2-x1);
    y1=abs(y2-y1);
    double ans=sqrt(pow(x1,2)+pow(y1,2));
    return ans;
}

int main(){

    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<Distance(x1,y1,x2,y2)<<endl;
}
