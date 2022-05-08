#include<stdio.h>

#include<iostream>
using namespace std;
void swap(int a[],int b[]){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void partition(int l,int h,int a[]){
    int i=l-1,j;
    int p=arr[l];
    for(j=l;j<h;j++){
        if(a[j]<=p){
            i++;
            swap(a[i],a[j]);
        }
    }
}
int main(){
    int arr[100];
    
    int i,j;
    int n;
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
    cout<<arr[i];
    }
}
