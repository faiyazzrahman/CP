#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int arr[n],brr[n],drr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]>>brr[i];
        drr[i]=brr[i]-arr[i];
        if(drr[i]>=2){
            count++;
        }
    }
    cout<<count;
}