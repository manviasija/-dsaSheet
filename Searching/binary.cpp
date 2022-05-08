#include<stdio.h>

#include<iostream>
using namespace std;
int bin(int arr[],int l,int h,int ele){
    int mid=l+(h-l)/2;

    if(ele ==arr[mid]){
        return mid+1;
    }
    else if (ele>arr[mid]){
        return bin(arr,mid+1,h,ele);
    }
    else{
        return bin(arr,l,mid-1,ele);
    }
}
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
    cout<<bin(arr,0,n,ele);

}