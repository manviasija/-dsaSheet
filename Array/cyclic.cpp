#include<stdio.h>

#include<iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
    arr[0] = x;
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
    rotate(arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    
    
    
}