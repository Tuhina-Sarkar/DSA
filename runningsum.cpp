#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num={1,2,3,4};
    int n=num.size();
    for(int i=1;i<n;i++){
        num[i]+=num[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}
