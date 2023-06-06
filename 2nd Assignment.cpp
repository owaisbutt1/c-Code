// Submitted BY Hassan Yaseen 
// SAP ID 44820
#include<iostream>
#include<iomanip>

using namespace std;
class Time{
	private:
		int hour, min, sec;
		char mode;
	public:
		//Default Constructor
		Time(): hour(0), min(0), sec(0), mode('a'){
		}
		// Param. Constructor
		Time(int _hour, int _min, int _sec, char _mode): hour(_hour), min(_min), sec(_sec), mode(_mode){
		}
		// Param. Constructor
		Time(int _hour, int _min, int _sec): hour(_hour), min(_min), sec(_sec){
// 			Following Method will Allow User to pass any number without range check:
//			if(_sec > 60){
//				_min += (_sec / 60);
//				min = _min;
//				sec = _sec % 60;
//			}
//			if(_min > 60){
//				_hour += (_min / 60);
//				hour = _hour;
//				min = _min % 60;
//			}
//			if(_hour > 12){
//				hour = _hour - 12;
//				mode = 'p';
//				}
		}
		// Param. Constructor
		Time (const Time& t1): hour(t1.hour), min(t1.min), sec(t1.sec), mode(t1.mode){
		}
		int getHours(){
			return hour;
		}
		int getMinutes(){
			return min;
		}
		int getSeconds(){
			return sec;
		}
		char getMode(){
			return mode;
		}
		void setHours(int _hour){
			hour += _hour;
			if(hour >= 12){
				hour = hour % 12;
				mode = 'a';
			}
		}
		void setMinutes(int _min){
			min += _min;
			if(min >= 60){
				hour += (min / 60);
				if(hour >= 12){
					if( mode == 'a') mode = 'p';	else mode = 'a';
					hour = hour % 12;
				}
				min = min % 60;
			}
		}
		void setSeconds(int _sec){
			sec += _sec;
			if(sec >= 60){
				min += sec / 60;
				if(min >= 60){
					hour += (min / 60);
					if(hour >= 12){
						if( mode == 'a') mode = 'p';	else mode = 'a';
						hour = hour % 12;
					}
					min = min % 60;
				}
				sec = sec % 60;
			}
		}
		void setMode(char _mode){
			mode = _mode;
		}
		void displayTime(){
			cout<<setw(25)<<"Hours : Minutes : Seconds"<<endl;
			cout<<setw(3)<<hour<<setw(4)<<":"<<setw(5)<<min<<setw(5)<<":"<<setw(5)<<sec<<" "<<setw(4);
			if(mode == 'a')	cout<<"    AM"<<endl;
			if(mode == 'p')	cout<<"    PM"<<endl;
		}
		double convertToSeconds(){
			sec += min * 60;
			sec += hour * 3600;
			return sec;
		}
		double convertToMinutes(){
			min += sec / 60;
			min += hour * 60;
			return min;
		}
		double convertToHours(){
			min += sec / 60;
			hour += min / 60;
			return hour;
		}
		void convertTo24HourFormat(){
			int tempHour = hour;
			if(mode == 'p'){
				tempHour += 12;
				if(tempHour >= 24) tempHour = 0;
			}
			cout<<setw(25)<<"*24 Hour Format*\n";
			cout<<setw(25)<<"Hours : Minutes : Seconds"<<endl;
			cout<<setw(3)<<tempHour<<setw(4)<<":"<<setw(5)<<min<<setw(5)<<":"<<setw(5)<<sec<<endl;
		}
		void incrementSeconds(int _sec){
			sec += _sec;
			if(sec >= 60){
				min += sec / 60;
				if(min >= 60){
					hour += min / 60;
					if(hour >= 12){
						if(hour > 12)	hour = hour % 12;
						if (hour == 12){
							if( mode == 'a') mode = 'p';
							else mode = 'a';
						}
					}
				min = min % 60;
				}	
			sec = sec % 60;
			}
		}
		void incrementMinutes(int _min){
			min += _min;
			if(min >= 60){
				hour += min / 60;
				if(hour >= 12){
					if(hour > 12)	hour = hour % 12;
					if (hour == 12){
						if( mode == 'a') mode = 'p';
						else mode = 'a';
					}
				}
			min = min % 60;
			}
		}
};
void insertLine(){
	cout<<"\n--------------------------------"<<endl;
}
int main(){
	int hours, mins, sec;
	char mode = 'a';
	
	// Getting & Validating Input From User To Pass onto Constructor
	cout<<"Please Enter Time in Following Format [HH:MM:SS]: "<<endl;
	insertLine();
	do{
		cout<<"Hours (Between 1-12): ";
		cin>>hours;
		if(hours > 12 || hours <= 0)
			cout<<"Enter Value Between 1-12!"<<endl;
	}while(hours > 12 || hours <= 0);
	insertLine();
	do{
		cout<<"Minutes (Between 0-59): ";
		cin>>mins;
		if(mins > 59 || mins <= 0)
			cout<<"Enter Value Between 0-59!"<<endl;
	}while(mins > 59 || mins <= 0);
	insertLine();
	do{
		cout<<"Seconds (Between 0-59): ";
		cin>>sec;
		if(sec > 59 || sec <= 0)
			cout<<"Enter Value Between 0-59!"<<endl;
	}while(sec > 59 || sec <= 0);
	insertLine();
	do{
		cout<<"Press 'a' for AM\nOR\n'p' for PM"<<endl;
		cin>>mode;
		if(mode != 'a' && mode != 'p')
			cout<<"Select a or p only!"<<endl; insertLine();
	}while(mode != 'a' && mode != 'p');
	
	Time t1(hours,mins,sec,mode);
	
	insertLine();
	t1.displayTime();
	insertLine();
	t1.incrementMinutes(1);
	t1.incrementSeconds(1);
	t1.convertTo24HourFormat();
	insertLine();
	t1.incrementMinutes(12);
	t1.incrementSeconds(12);
	cout<<setw(25)<<"*12 Hour Format*\n";
	t1.displayTime();
	insertLine();
	cout<<t1.convertToHours();
}
