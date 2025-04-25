#include <iostream>
using namespace std;

int main(){
      int arr[]={10,20,30,40,50,60};
       int n=6;
       int temp=arr[5];
       int i=n-1;
       for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
       }
       arr[0]=temp;
        for(i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
     
}