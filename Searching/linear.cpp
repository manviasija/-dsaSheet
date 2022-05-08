#include<stdio.h>

#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int i,n,ele;
  
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to be searched:";
    cin>>ele;
    for(i=0;i<n;i++){
        if(arr[i]==ele){
            cout<<i+1<<" ";
        }
    }

}