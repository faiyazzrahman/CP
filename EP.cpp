#include<iostream>
using namespace std;

int main(){
    int n;
    bool flag=true;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            cout<<"HARD";
            flag=false;
            break;
        }

    }
    if(flag == true){
        cout<<"EASY";
    }

}