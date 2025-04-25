#include <iostream>
#include <limits.h>
using namespace std;
int minarray(int arr[],int size){
    int minans=INT_MAX;
    for(int i=0;i<size;i++){
        
        if(arr[i]<minans){
            minans=arr[i];
        }
    }
    return minans;
}
int main(){
    int arr[]={2,12,3,45,667};
    int size=5;
   
    int minans =minarray(arr,size);
    cout<<"minimum answer is"<<minans;

    
}