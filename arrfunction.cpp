#include <iostream>
using namespace std;
bool linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target);
        return true;
    }
    return false;
}
int main(){
    int arr[5]={1,2,3,4,5},size=5,target=4;
    bool ans =linearsearch(arr,size,target);
    if(ans=1){
        cout<<"found";
    }
    else {
        cout<<"not found";
    }

    }