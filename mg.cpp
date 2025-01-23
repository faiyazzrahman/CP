#include<iostream>

using namespace std;

int main(){
    int n,g=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        
    }
    int temp =arr[0];
    for(int i=0;i<n;i++){
          
        if(arr[i]!=temp){
            temp= arr[i];
            g++;
            
        }
    }
  
    cout<<g;
}



