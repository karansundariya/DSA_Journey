#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main (){
   int arr[]={3,4,5,6,7,8,};
   int size=6;
   printarray(arr,size);


}