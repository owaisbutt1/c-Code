#include<iostream>
using namespace std;

class Student{
	private:
		string Name,Phone, date_of_birth;
		int SAP;
		
		public:
			Student(){
		Name="\o";
		Phone="\o";
		date_of_birth="\o";
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
				cout<<Name<<endl;
				cout<<Phone<<endl;
				cout<<date_of_birth<<endl;
				cout<<SAP<<endl;
			}		
			~Student(){
				cout<<"Destructor is working"<<endl;
		}
		};

int main(){
	string Getname;
Student st1;
st1.getName();
st1.getPhone();
st1.getDateofBirth();
st1.getSAP();
st1.displaydata();
Getname=st1.getName();
cout<<Getname<<endl;
}

