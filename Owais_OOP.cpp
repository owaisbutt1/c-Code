#include<iostream>
using namespace std;

class Student{
	private:
		string Name,Phone, date_of_birth;
		int SAP;
		
		public:
			Student(){
				Name="\0";
				Phone="\0";
				date_of_birth="\0";
				SAP=0;
			}
			
			string getName(){
				cout<<"Please enter name"<<endl;
				cin>>Name;
				return Name;
			
			}
	
			void getPhone(){
				cout<<"Please enter phone"<<endl;
				cin>>Phone;
			}
	
			void getDateofBirth(){
				cout<<"Please enter date of birth"<<endl;
				cin>>date_of_birth;
			}
	
			void getSAP(){
				cout<<"please enter SAP"<<endl;
				cin>>SAP;
			}
	
			void displaydata(){
				cout<<"Name : "<<Name<<endl;
				cout<<"Phone Number : "<<Phone<<endl;
				cout<<"Date of Birth : "<<date_of_birth<<endl;
				cout<<"SAP ID : "<<SAP<<endl;
			}		
	
			~Student(){
			}
		};

int main(){
	string name;
	
	Student st1;
	st1.getName();
	st1.getPhone();
	st1.getDateofBirth();
	st1.getSAP();
	st1.displaydata();

	name=st1.getName();
	cout<<name<<endl;
}
