// rotate a array by k times
// here let k=2;
// code not working
#include <iostream>
#include <vector>
using namespace std;
int main(){
     int k=2;
    
    vector<int>nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    nums.push_back(50);
    nums.push_back(60);
    nums.push_back(70);

    int n=nums.size();

    vector<int>ans(n);
    
     
    for(int index=0;index<n;index++){
        int newIndex= (index+k)%n;
         ans[newIndex]=nums[index];
      
    }
    nums = ans;
    for(int index=0;index<n;index++){
        cout<<nums[index]<<endl;
       
    }
    

}