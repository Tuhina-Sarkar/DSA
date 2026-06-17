//displaying all the possible subarrays
#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int start=0,end=4;
    for(start=0;start<n;start++){
        for(end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}