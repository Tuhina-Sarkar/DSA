//Kadane's maximum subarray algorithm
//using the approach that +(small)-(big)= -ve and -(small)-(big)=- ve then we reset the large -ve number to 0
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={-9,-2,3,-1,9};
    int currentSum=0,maxSum=INT_MIN;
    for(int val:vec){
            currentSum+=val;
            maxSum=max(currentSum,maxSum);
            if(currentSum<0){
                currentSum=0;
            }
        }
         cout<<"Maximum sum of subarray: "<<maxSum;
    }