// 1- Print 1 to N Write a program that reads an integer N and prints all numbers from 1 to N 
//(each on a new line) using a for loop. Example:
// N=5 ? 1 2 3 4 5
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter total number n : "<<endl;
	cin>>n;
	for(int i=1 ; i<=n; i++){
		cout<<i<<endl;
	}
}