#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int n;
    int rev=0, rem;

    cin>>n;

    while(n>0){
        rem=n%10; // n=123 rem=3    rem=2
        cout<<rem<<" ";
        rev=rev*10+rem;
        cout<<rev<<" ";   //rev=3   rev=30+2=32
        n=n/10;   
        cout<<n<<" ";  //n=12  n=1
    }
    cout<<rev;
}