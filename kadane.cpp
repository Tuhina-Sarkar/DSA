//Kadane's maximum subarray algorithm
//using the approach that +(small)-(big)= -ve and -(small)-(big)=- ve then we reset the large -ve number to 0
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={-9,-2,3,-1,9};
    int currentSum,maxSum=INT_MIN;
    for(int start=0;start<vec.size();start++){
        currentSum=0;
        for(int end=start;end<vec.size();end++){
            currentSum+=vec[end];
            maxSum=max(currentSum,maxSum);
            if(currentSum<0){
                currentSum=0;
            }
        }
    }
    cout<<"Maximum sum of subarray: "<<maxSum;
}