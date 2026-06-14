//decimal to binary
//using pow gives error as it generates a floating point number and on converting it into 
//integer it rounds off the value
#include <math.h>
#include <iostream>
using namespace std;
int convertBin(int n){
    int d,num=0,p=1;
   while(n>0){
        d=n%2;
        num=num+d*p;
        n/=2;
        p*=10;
    } 
    return num;
}
int main(){
    int n,d,num=0,p=1;
    cout<<"Enter number: ";
    cin>>n;
    int temp=n;
    cout<<"The binary equivalent of  "<<temp<<" is "<<convertBin(n);
    return 0;
}
