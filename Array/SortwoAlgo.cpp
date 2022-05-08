#include<stdio.h>

#include<iostream>
using namespace std;
//sorting without algo, when array contains only0,1,2
int main(){
    int arr[100];
    int i,n;
    int c0=0,c1=0,c2=0;
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        switch(arr[i]){
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
        }
    }
    i=0;
    while(c0>0){
        arr[i++]=0;
        c0--;
    }
    while(c1>0){
        arr[i++]=1;
        c1--;
    }
    while(c2>0){
        arr[i++]=2;
        c2--;
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}
