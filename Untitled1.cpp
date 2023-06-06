#include<iostream>
using namespace std;
void swaping(int a,int b){
int z;
z=a;
a=b;
b=z;
cout<<a<<endl<<b;
}
int main(){
	int a,b,d,e,z;
	cout<<"please enter the integer for swaping\n";
	cin>>d>>e;
	cout<<"values are going to swap\n";
swaping(d,e);
}

