#include<iostream>

using namespace std;

int main(){
	
	int basamak;
	cout<<"Basamak?: ";
	cin>>basamak;
	
	for(int i=basamak;i>0;i--){
		
		for(int j=i;j>0;j--){
			cout<<" ";
		}
		for(int t=(basamak-i)*2+1;t>0;t--){
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int i=basamak-1;i>0;i--){
		
		for(int j=basamak-i+1;j>0;j--){
			cout<<" ";
		}
		for(int t=i*2-1;t>0;t--){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
