#include<iostream>
using namespace std;
int main(){
    int arr[10],sum=0;
    cout<<"Enter ten numbers in an array"<<endl;
    for(int i=0;i<10;i++)
   { cin>>arr[i];
    sum=sum+arr[i]; 
   }
   cout<<endl<<"The sum is "<<sum<<endl;
    return 0;
}