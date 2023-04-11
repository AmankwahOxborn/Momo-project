#include<iostream>

using namespace std;

int main(){
int pin = 0000;//default pin
int balance = 1000; //default balance
int wrong_pin_count=0;
int choice;
int receiver;


cout<<"welcome to Mobile Money Service"<<endl;
cout<<"1. Autthenticate"<<endl;
cout<<"2. Reset/change Pin"<<endl;
cout<<"3. Check Balance"<<endl;
cout<<"4. Send Money"<<endl;
cout<<"5. Exit"<<endl;
cout<<"ENTER YOUR CHOICE: ";
cin>>choice;

switch (choice){
	case 1:{
		int entered_pin;
		cout<<"PLEASE ENTER YOUR PIN:\n ";
		cin>>entered_pin;
		
		
		if(entered_pin==pin){
			cout<<"Authentication successful"<<endl;
			wrong_pin_count=0;//reset wrong pin
		} 
		
		else{
			cout<<"Authentication failed!"<<endl;
			wrong_pin_count++;
			
		
		}
			if(wrong_pin_count ==3){
				cout<<"TOO many attempts. Exiting program"<<endl;
				return 0;
		}
		break;
		case 2:{
		int new_pin;
		cout<<"ENTER YOUR NEW PIN:";
		cin>>new_pin;
		pin==new_pin;
		cout<<"PIN changed successfully!"<<endl;
		break;
			case 3:{
				cout<<"Please enter your pin: ";
				cin>>pin;
				if(pin==pin){
					cout<<"Your current balance is "<<balance<<".00GHC";
					}
						else if(entered_pin!=pin){
						cout<<"Incorrect pin";
				}
				
					break;
	}
	case 4:{
		float amount;
		cout<<"ENTER AMOUNT YOU WANT TO SEND: ";
		cin>>amount;
		
		if(amount>balance){
			cout<<"Insufficient balance!"<<endl;
			
		}
		else{
			
			cout<<"Enter the reciever's mobile money number: ";
			cin>>receiver;
			
			balance-=amount;
			cout<<"okay"<<endl;
			
			cout<<"Please enter your pin: ";
			cin>>pin;
		}
		if(pin==pin){
			cout<<"An amount of "<<amount<<" has been sent to "<<receiver<<" successfully"<<endl;
	}
		else{
			cout<<"Incorrect mobile money pin";
			return 0;
		}
}
}
case 5:{
	cout<<"Exiting program...."<<endl;
	return 0;
	break;
	default:{
		cout<<"Invalid choice. Please try again."<<endl;
		break;
	}
}
}

	return 0;
}
}
