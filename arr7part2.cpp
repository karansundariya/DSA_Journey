// shifting elements by k times
// let k be 2 times
// sol sahi nhi h check question answer again

#include <iostream>
using namespace std;
void shift(int arr[],int n){
    int temp[2];
    temp[0]=arr[n-2];
    temp[1]=arr[n-1];
        for(int i=n-2;i>0;i--){
        arr[i]=arr[i-1]; }
     arr[0]=temp[0];
     arr[1]=temp[1];
     for(int j=0;j<n;j++)
     {  cout<<arr[j]<<endl; }}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
   
    shift(arr,n);}