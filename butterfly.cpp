#include<iostream>
using namespace std;
int main(){
int i,j,n;
cout<<"enter n";
cin>>n;
for(i=0;i<n;i++){
for(j=0;j<=i;j++){
cout<<'*';
}
for(j=0;j<(2*n-2-2*i);j++){
cout<<" ";
}
for(j=0;j<=i;j++){
cout<<'*';
}
cout<<endl;
}
for(i=0;i<n;i++){
for(j=n;j>i;j--){
cout<<'*';
}
for(j=0;j<2*i;j++){
cout<<" ";
}
for(j=n;j>i;j--){
cout<<'*';
}
cout<<endl;
}
return 0;
}