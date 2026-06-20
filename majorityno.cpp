// Majority Element
//using brute force approach
//a number is said to be majority element if it occurs more than n/2 times in the array
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int>vec={1,2,1,2,2,2,2,5};
    int n=vec.size();
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(vec[i]==vec[j]){
                count++;
            }}
            if(count>floor(n/2)){
                cout<<"The majority element is: "<<vec[i];
                return 0;
            }
    }
    cout<<"No majority element found.";
    return 0;
}