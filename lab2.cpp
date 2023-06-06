#include <iostream>
using namespace std;

class Account{
	private:
		string accno,acctitle;
		double amount;
		char acctype;
		char changetype;
		
	public:
			Account():accno("\0"),acctitle("\0"),amount(0),acctype('\0'){
				cout<<"i am Bank ATM"<<endl;
			}
			Account (string acc_no, string acc_title, double amount_no, char acc_type){
				
			}
			Account (const Account &a){
				
			}
		void deposit(double deposit){
			amount += deposit;
			cout<<"you deposit this amount "<<deposit<<endl;
		}
		void withdraw(double withdraw){
			cout<<" You withdraw RS: "<<withdraw<<endl;
			amount-=withdraw;
		}
		//changetype
		void changeType(){
			cout<<"please enter account type";
			cin>>changetype;
				if(changetype==acctype){
			cout<<"type is by default also is: "<<changetype<<endl;
			
		}
	else if(changetype!=acctype && changetype=='S' ){
		cout<<"your updated account type is "<<changetype<<endl;
	}
	else{
			do{
				cout<<"Please enter valid account type "<<endl;
				cin>>changetype;
			}
			while(changetype!='C' && changetype!='S');
		
		cout<<"your account type is "<<changetype<<endl;
	}
		}
		double checkbalance(){
			
		}
		void displayAccountInfo(){
		  	cout<<"your account title is: "<<getAccTitle()<<endl;
			cout<<"your account no is: "<<getAccNo()<<endl;
			cout<<"your account type is: "<<getAccType()<<endl;
			cout<<"your account balance is: "<<getAmount()<<endl;
		
		}
		// for getting data
		string getAccNo(){
		return accno;
		}
		string getAccTitle(){
		return acctitle;
		}
		double getAmount(){
			return amount;
			
		}
		char getAccType(){
			return acctype;
		}
		//for setting data
		void setAccNo(string Number){
			accno= Number;
		}
		void setAccTitle(string title){
			acctitle=title;
		cout<<"dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd"<<endl;
		}
		void setAmount(double setamunt){
			amount=setamunt;
		}
		void setAccType( char Type){
			acctype=Type;
		}
	
		~Account(){
			cout<<"I am Destructor"<<endl;
			
		}
};
int main(){
	Account a1;
	a1.setAccNo("1248382");
	a1.setAccTitle("This is owais's bank account");
	a1.setAccType('C');
	a1.setAmount(500);
	cout<<"your account balance is "<<a1.getAmount()<<endl;
	a1.deposit(1000);
	cout<<"your total balance is: "<<a1.getAmount()<<endl;
	a1.withdraw(700);
	cout<<"Now your account balance is "<<a1.getAmount()<<endl;
	a1.changeType();
	a1.displayAccountInfo();
	
}

