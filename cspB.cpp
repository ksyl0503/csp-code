#include<iostream>
using namespace std;
int k(int x);
int main(){
	int n;
	int kcount;
	cin>>n;
	for(int i=0;i<n;i++){
	int x;
	cin>>x;
	int count=k(x);
		if(i==0){
			kcount=count;
		}
		else{if(count<kcount){kcount=count;}}
		
		
	}
	cout<<kcount;
return 0;}
int k(int x){int count=0;
	while(x%2==0){count++;x=x/2;}
return count;}