#include<iostream>
using namespace std;

class Cube{
	private:
		double length;
		double width;
		double height;
	public:
	Cube()
	{
		length=0;
		width=0;
		height=0;
		}	
		Cube(double l,double w,double h)
		{
			length=l;
			width=w;
			height=h;
		}
		void display()
		{
			
		}
		Cube operator+(const Cube& c2 ){
			double resultlength=length+c2.length;
			double resultwidth=width+c2.width;
			double resultheight=height+c2.height;
			return Cube(resultlength,resultwidth,resultheight);//anonymous value
		}
		Cube operator-(const Cube& c2 ){
			double resultlength=length-c2.length;
			double resultwidth=width-c2.width;
			double resultheight=height-c2.height;
			return Cube(resultlength,resultwidth,resultheight);
		}
		Cube operator*(const Cube& c2 ){
			double resultlength=length*c2.length;
			double resultwidth=width*c2.width;
			double resultheight=height*c2.height;
			return Cube(resultlength,resultwidth,resultheight);
		}
		Cube operator/(const Cube& c2 ){
			double resultlength=length/c2.length;
			double resultwidth=width/c2.width;
			double resultheight=height/c2.height;
			return Cube(resultlength,resultwidth,resultheight);
		}
		void operator=(const Cube& c2){
				double resultLength = length = c2.length;
				double resultwidth= width = c2.width;
				double resultheight=height=c2.height;
		}
		bool operator== (const Cube& c2){
			
			double resultlength = length == c2.length;
				double resultwidth= width == c2.width;
				double resultheight=height==c2.height;
				 
    if (resultlength && resultwidth && resultheight) {
        cout << "it is true";
        return true;
    } else {
        cout << "it is false";
        return false;
		}
	}
};
int main()
{
	Cube c1,c2,c3;
	c3=c1+c2;
	c3=c1-c2;
	c3=c1*c2;
	c3=c1/c2;
	c3=c1;
	c3=c2;
	
	
}
