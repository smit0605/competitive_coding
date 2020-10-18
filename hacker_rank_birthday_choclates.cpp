#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int N=0;
    cin>>N;
    int arr[N]={0},d=0,m=0,sum=0,count=0;
    for(int i=0;i<N;i++){
        cin>>arr[i];            
    }
    cin>>d>>m;
    for(int i=0;i<N-m;i++){
        //sum = arr[i];
        for(int j=i;j<i+m;j++){
            sum += arr[j];
                        
        }
        //cout<<"hi i am sum: "<<sum<<"\n";
        if(sum == d){
            count++;
        }
        sum =0;
        //temp=0;
    }
    cout<<count<<endl;
    
}
