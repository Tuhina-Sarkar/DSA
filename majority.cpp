//optimized code for finding majority element in an array
//using sorting+loop
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    vector<int>vec={1,2,3,2,2,2,5,4,2};
    int n=vec.size(),c=1,ans;
    sort(vec.begin(),vec.end());
    for(int i=1;i<n;i++){
       if(vec[i]==vec[i-1]){
        c++;
        ans=vec[i];
       }
       else{
        c=1;
       }
        if(c>floor(n/2)){
    cout<<"The majority element is: "<<ans;

    }
}
}