//using bit manipulation
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //for power of 2: exactly one bit in binary and subtracting it by 1 flips 
    //it to 0 and other bits to one so , on & it we get 0
    if(n>0 and (n&(n-1))==0){
        cout<<"Power of 2";
    }
    else{
        cout<<"Not a power of 2";
    }
    return 0;
}