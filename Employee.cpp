//Name:Patrick Maina Njai
//Admission:BCS-05-0134/2024

#include<iostream>
#include<string>
using namespace std;

int main(){
	string empName;
	float hoursworked,rateperHour;
	float basicPay,tax,netPay;
	
	//User input
	cout<<"Enter Employee Name:";
	getline(cin,empName);
	cout<<"Enter Hours worked:";
	cin>>hoursworked;
	cout<<"Enter Rate per Hours:";
	cin>>rateperHour;
	
	//Basic Pay
	basicPay=hoursworked*rateperHour;
	
	//Tax
	if(basicPay>50000){
		tax=basicPay*0.20;
	}
	else if(basicPay<=20000&&basicPay>=50000){
		tax=basicPay*0.10;
	}
	else{
		tax=0;
	}
	
	//Net Pay
	netPay=basicPay-tax;
	
	cout<<"\n Employee Name:"<<empName<<endl;
	cout<<"Basic Pay:"<<basicPay<<endl;
	cout<<"Tax:"<<tax<<endl;
	cout<<"Net Pay:"<<netPay<<endl;
	
	return 0;	
}