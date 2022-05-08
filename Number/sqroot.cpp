#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int sqr=1,c=1;
    while(sqr<=n){
        c++;
        sqr=c*c;
    }
   int res=c-1;
   cout<<res;

}