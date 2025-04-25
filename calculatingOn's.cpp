#include <iostream>
#include <vector>
using namespace std;
int main(){
   int arr[3][3]={
    { 1,0,0},
    {1,1,0},
    {0,0,0}
   };
   int row=3;
   int col=3;
  
int onecount=0 ;
   int rowno;
   int i;
   
   for( i=0;i<row;i++){
     int count=0 ;
    for(int j=0;j<col;j++){
        if(arr[i][j]==1){
                count++;

        }
        

    }
    if(count>onecount){
            onecount=count;
            rowno=i;
        }
    
   }
   cout<<"1 is coming how many times  "<< onecount<<"  row no"<<rowno;
   return 0;
}