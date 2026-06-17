//maximum sum of a subarray using brute force approach
//time complexity: 0(n^2)(we optimized it from n^3)
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,-2,3,4,-5};
    int currentSum,maxsum=INT_MIN;
    for(int start=0;start<vec.size();start++){
          currentSum=0;
        for(int end=start;end<vec.size();end++){
            currentSum+=vec[end];
            maxsum=max(maxsum,currentSum);
        }
    }
    cout<<"Maximum sum is : "<<maxsum;
    return 0;
}
