#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
     cout<<"Enter 2nd number: ";
    cin>>n2;
    //Bitwise and operation(4 : 100) & (8: 1000)=0000
    cout<<"Bitwise & of "<<n1<<" & "<<n2<<" is "<<(n1 & n2)<<endl;
    //bitwise or operation
    cout<<"Bitwise or of "<<n1<<" | "<<n2<<" is "<<(n1 | n2)<<endl;
    //Bitwise xor ^ operation for same bits =0 alternate bit=1
     cout<<"Bitwise xor of "<<n1<<" ^ "<<n2<<" is "<<(n1 ^ n2)<<endl;
    return 0;
}