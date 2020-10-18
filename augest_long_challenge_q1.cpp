#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	double P=0;
	int temp=0,H=0;
	int T=0;
	//while(temp!=0){
	cin>>T;
	for(int j=0;j<T;j++){
		
		cin>>H>>P;
		
		//temp = int(P);
		if(H<=P){
			cout<<1<<endl;
		}
		
		else{
		    while(P>0){
		        temp = temp + P;
		        P = floor((P/2));
		    }
		    if(H<=temp){
		        cout<<1<<endl;
		    }
		    else {
		        cout<<0<<endl;
		    }
		}
		H=0,P=0,temp=0;
	}
}
