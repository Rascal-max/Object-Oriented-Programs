//Simple interest program
#include<iostream>
using namespace std;

//function prototype
float simple_interest(float principal,float rate,int time);

int main(){
	float s_interest;
	float principal,rate;
	int time;
	cout<<"Enter principal,rate and time"<<endl;
	cin>>principal>>rate>>time;
	
//function calling
s_interest=simple_interest(principal,rate,time);
cout<<"the simple interest is"<<s_interest<<endl;
return 0;//
}

//function definition
float simple_interest(float principal,float rate,int time){
float interest;
interest=(principal*rate*time)/100;
return interest;
}
