#include<iostream>
using namespace std;

int function(int a){
	if(a==1){
		return a;
	}
	else{
	
		return a*function(a-1);}
}
int main(){
	int a;
	cin>>a;
	int d=function(a);
	cout<<"The factorial is "<<d<<endl;
}
