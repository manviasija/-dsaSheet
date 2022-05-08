#include<stdio.h>

#include<iostream>
using namespace std;
int buyy(int prices[],int n){
int ans = 0;
        for (int i = 1; i < n; i++) {
            if (prices[i] > prices[i - 1])
                ans += prices[i] - prices[i - 1];
        }
        return ans;
}

int main(){
    int arr[100];
    
    int i;
    
    int n,j;
    cout<<"Enter size:";
    cin>>n;
   
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<buyy(arr,n);
}