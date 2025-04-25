#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool flag=0;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
           flag=1;
           break;
        }
        
    }
    if (flag==1){
        cout<<"target found";
    }
    else {
        cout<<"target not found";
    }
}