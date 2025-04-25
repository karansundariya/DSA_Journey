// j=i line yaad rakna h .. yaha hi galti hogi ..transpose krtey time
// important ques
// very very very important ques
// pahle transpose krenge phhir row wise rotate



#include <bits/stdc++.h>
using namespace std;
void transpose(int arr[][3],int row , int col){
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
           swap(arr[i][j],arr[j][i]);
        }
        
    }
}
void printarray(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

int row=3;
int col=3;
cout<<"printing before transpose"<<endl;
printarray(arr,row,col);
transpose(arr,row,col);
cout<<"printing after transpose"<<endl;
printarray(arr,row,col);
cout<<"final array after 90 degree roating";
 for (int i=0;i<row;i++){
    swap(arr[i][0],arr[i][col-1]);
       
   

 }
 cout<<endl;
 printarray(arr,row,col);

return 0;
}