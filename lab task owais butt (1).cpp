#include<iostream>
using namespace std;

class Cube{
	private :
		double length,width,height;
		public:
			
			Cube():length(0),width(0),height(0){
				cout<<"by default constructor is working"<<endl;
			}
			Cube(double ln,double wdth,double hght):length(ln),width(wdth),height(hght){
				cout<<"parematrized constructor is working"<<endl;
				
			}
		
			void display(){
				cout<<"width of cube is"<<width<<endl;
				cout<<"length of cube is"<<height<<endl;
				cout<<"height of cube is"<<height<<endl;
				
			}
			Cube operator+ (const Cube& obj){
				
			Complex sum;
			sum.width=width+obj.width;
			sum.height=height+obj.height;
			sum.length=length+obj.length;
			return sum;
			}
				Cube operator- (const Cube& obj){
				
			Complex sub;
			sub.width=width-obj.width;
			sub.height=height-obj.height;
			sub.length=length-obj.length;
			return sub;
			}
				Cube operator* (const Cube& obj){
				
			Complex multi;
			multi.width=width*obj.width;
			multi.height=height*obj.height;
			multi.length=length*obj.length;
			return multi;
			}
			
			Cube operator/ (const Cube& obj){
				
			Complex multi;
			divi.width=width/obj.width;
			divi.height=height/obj.height;
			divi.length=length/obj.length;
			return divi;
			}void operater= (cube& equal){
				complex  singlequal;
				singlequal.width=width=obj.width;
			singlequal.height=height=obj.height;
			singlequal.length=lengthobj.length;
				
			}
			bool operater== (cube& equal){
				complex  doubleequal;
				doubleequal.width==width=obj.width;
			doubleequal.height==height=obj.height;
			doubleequal.length==lengthobj.length;
				
			}
}; 
int main(){
	Cube c1, c2,sumResult, subResult,divisibleResult;
	
	sumResult=c1+c2;
	subResult=c1-c2;
	multiResult=c1*c2;
		divisibleResult=c1/c2;
		
}
