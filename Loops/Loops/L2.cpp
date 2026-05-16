#include <iostream>
using namespace std;

int main(){
	int x=10;
	int* p = &x;
	int** pp = &p;
	cout<<"x is : "<<x<<endl;
	cout<<"p is : "<<*p<<endl;
	cout<<"before change pp is  : "<<**pp<<endl;
	**pp = 20;
		cout<<"after change pp is  : "<<**pp<<endl;
}