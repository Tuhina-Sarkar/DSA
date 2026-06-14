#include<iostream>
using namespace std;
int main(){
int i,j,n;
char a='A';
cout<<"enter n";
cin>>n;
//upper half
for(i=0;i<n;i++){
//space
for(j=0;j<n-i-1;j++){
cout<<" ";
}
cout<<'*';
for(j=0;j<2*i-1;j++){
cout<<" ";
}
if(i!=0){
 cout<<'*';
}
cout<<endl;
}
//lower half
for(i=0;i<n-1;i++){
for(j=0;j<=i;j++){
cout<<" ";
}
cout<<'*';
for(j=0;j<2*(n-i)-5;j++){
cout<<" ";
}
if(i!=n-2){
cout<<'*';
}
cout<<endl;
}

return 0;
}