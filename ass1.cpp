

#include<iostream>
#include<string>
using namespace std;
class Author {
	public:
		string name,country;
		Author(string n,string c):name(n),country(c){
		}
		
};
class Book{
	public:
	Author* name;Author* country;
		string title;
		int isbn;
		float price;
	 Book(string t,int i, float p,Author* n,Author* c):title(t),isbn(i),price(p),name(n),country(c){
    }
    int totalbookvalue(){
        int sum=0;
        sum+=price;
        return sum;
    }
    string authorname(){
        return name->name;
    }
    string authorcountry(){
        return country->country;
    }
};
int main(){
    Author a1("J.K. Rowling","UK");
    Author a2("George R.R. Martin","USA");
    
    Book b1("Harry Potter and the Sorcerer's Stone",1234,12000,&a1,&a1);
    Book b2("A Game of Thrones",5678,15000,&a2,&a2);
    cout<<b1.totalbookvalue()<<endl;
    cout<<b1.authorcountry()<<endl;
    cout<<b1.authorname()<<endl;
}  





