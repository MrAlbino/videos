#include<iostream>

using namespace std;

int main(){
	
	int boyut;
	
	cout<<"Kum saati boyutu:";
	cin>>boyut;
	cout<<endl;
	
	for(int i=0;i<boyut;i++){
		
		for(int j=i;j>0;j--){
			cout<<" ";
		}
		
		for(int k=(boyut-i)*2-1;k>0;k--){
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(int i=0;i<boyut-1;i++){
		
		for(int j=boyut-2-i;j>0;j--){
			cout<<" ";
		}
		
		for(int k=(i+1)*2+1;k>0;k--){
			cout<<"*";
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
