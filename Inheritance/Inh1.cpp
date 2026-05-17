// Level 1: Basic – Single Inheritance
//Problem 1.1 – Basic Vehicle
//Create a class Vehicle with brand, speed, and a method showInfo().
//Derive a class Car that adds numberOfDoors. Override showInfo() to include door count.
//
#include<iostream>
#include<string>
using namespace std;

class Vehical{
	public:
		int speed;
		string brand;
		Vehical(string b,int s){
			brand = b;
			speed=s;
		}
		void vshow(){
			cout<<"barand name is: "<<brand<<endl;
			cout<<"Speed is : "<<speed<<" km/s"<<endl;
		}
};
class car:public Vehical{
	public:
		int dcount;
		car(string b, int s,int c):Vehical(b,s),dcount(c){
		}
		void cshow(){
			Vehical::vshow();
			cout<<"count of doors are : "<<dcount;
		}
};
int main(){
	car c("Hondai",3400,2);
	c.cshow();
}