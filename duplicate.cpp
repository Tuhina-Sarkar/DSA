//remove duplicates from a sorted array theres one element unique and the 
//rest are duplicates
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num={1,1,2,2,3,3,5};
    int n=num.size(),s=0;
    for(int i=0;i<n;i++){
        s=s^num[i];
    }
    cout<<s<<endl;
    return 0;
}
