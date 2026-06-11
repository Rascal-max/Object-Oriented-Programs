//Name:Patrick Maina
//Adm no:BCS-05-0134/2024
#include<iostream>
#include<string>
using namespace std;
//create class
class Book{
	public:
		string bookTitle,Author;
		int numberofCopies;
		
		void inputDetails(){
			cout<<"Enter book title:";
			getline(cin,bookTitle);
			
			cout<<"Author:";
			getline(cin,Author);
			
			cout<<"Enter number of copies:";
			cin>>numberofCopies;
		}
		void borrowBook(){
			if(numberofCopies>0){
				numberofCopies--;
				cout<<"Book borrowed successfully";
			}
			else{
				cout<<"No books Available";
			}
		}
		void displayDetails(){
			cout<<"\n Book Details";
			cout<<"Book Title"<<bookTitle<<endl;
			cout<<"Author"<<Author<<endl;
			cout<<"Number of copies available"<<numberofCopies<<endl;
		}
};
int main(){
	Book book1;
	
	//input book details
	book1.inputDetails();
	
	//Borrow a book
	book1.borrowBook();
	
	//display details
	book1.displayDetails();
	
	return 0;
	
}