// extreme point in an array
#include <iostream>
using namespace std;
void extremearr(int arr[],int size){
    int left=0;
    int right=size-1;
    for(left,right;left<=right;left++,right--){
    //   in odd case prints 2 times so to rid of this
    if(left==right){
        cout<<arr[left];
    }
       else{ cout<<arr[left]<<endl;
        cout<<arr[right]<<endl;
        }
    }

}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int size=9;
extremearr(arr,size);

}