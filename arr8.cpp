// negetive no one side 


#include <iostream>
using namespace std;
int main(){
    int arr[]={-2,3,4,5,6,-7,-8};

       int size=7;
       int j=0;
       for(int index=0;index<size;index++){
          if(arr[index]<0){ 
             swap(arr[index],arr[j]);
             j++;
             
          }
         
       }
       for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
       }
}