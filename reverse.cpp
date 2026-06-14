#include<iostream>
using namespace std;
int main(){
    int n,d,rev=0;
    cout<<"Enter a number: ";
    cin>>n;
    int num=n;
    while(n>0){
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    cout<<"Reverse of "<<num<<" is: "<<rev;
}