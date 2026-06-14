#include<iostream>
using namespace std;
int fact(int n){
int f=1;
for(int i=1;i<=n;i++){
f*=i;
}
return f;
}
int main()
{
    int n,r;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter r";
    cin>>r;
    cout<<"nCr is :"<<(fact(n)/(fact(r)*fact(n-r)));
        return 0;
}