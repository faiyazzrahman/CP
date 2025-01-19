#include<iostream>
using namespace std;

int main(){
    int y;
    cin>>y;
    
    int arr[4];
    while(true){
        y++;
        int temp;
        temp=y;
        for(int i=0 ; i<4; i++){
            arr[i]=temp%10;
            temp=temp/10;
        }
        if(arr[0]!=arr[1] && arr[0]!=arr[2] && arr[0]!=arr[3] && arr[1]!=arr[2] && arr[1]!=arr[3] && arr[2]!=arr[3]  ){
            break;
        }
      
      

    }
    cout << y ;
}