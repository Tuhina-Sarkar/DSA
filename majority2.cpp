//using Moore's voting algorithm to find the majority number
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>vec={1,2,3,2,2,2,5,4,2};
  int freq=0,candidate=0;
  for(int i=0;i<vec.size();i++){
    if(freq==0){
      candidate=vec[i]; 
    }
    if(candidate==vec[i]){
      freq++;
    }
    else{
      freq--;
    }
  }
  cout<<"The majority element is: "<<candidate;
}
