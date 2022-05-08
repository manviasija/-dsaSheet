#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

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
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    if(n%2!=0){
        
        cout<<arr[(n/2)];
    }
    else{
        int a1=arr[(n/2)-1];
        cout<<a1<<endl;
        int a2=arr[(n/2)];
        cout<<a2<<endl;
        float sum=a1+a2/2.0;

        cout<<sum;
    }
}