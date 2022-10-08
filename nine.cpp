#include<iostream>
using namespace std;
int main(){
    int a,b,res;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    res=(a>b)?a:b;
    cout<<"The maximum number is "<<res;
    return 0;
}