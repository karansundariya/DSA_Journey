// array reversing

#include <iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,8};
    int size=7;
    int left=0,right=6;
    for(left=0,right=6;left<=right;left++,right--){
    swap(arr[left],arr[right]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

}