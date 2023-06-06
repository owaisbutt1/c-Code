#include<iostream>
#include<cmath>
using namespace std;
 class Time{
 	private:
 		int hour,min,sec,secAddition,minAddition;
	char mode;
 		public:
 			//default constructor
 			Time():hour(0),min(0),sec(0),mode('\0'){
 				
 				cout<<"i am default constructor of Time class and i am initalized all data member"<<endl;
 				
			 }
			 //with the help of do while loop we will check that time format is 12 if it is not then loop works and take 12 hour format time from the user
			 Time(int hour_geeting,int min_getting,int sec_getting,char mode_getting){
			 	//loop is starting
			 	do{
				 
			 	if (hour_geeting<=12 && min_getting<60 && sec_getting<60){
				 
			 	hour=hour_geeting;
			 	min=min_getting;
			 	sec=sec_getting;
			 	mode=mode_getting;
			 }
			 else{
			 	cout<<"You entered invalid time please enter hours less than 12 minutes less than 60 and seconds less than 60"<<endl;
			 	cout<<"please enter hours less than or equal to 12"<<endl;
			 	cin>>hour_geeting;
			 		cout<<"please enter minutes less than or equal to 60"<<endl;
				cin >>min_getting;
					cout<<"please enter seconds less than or equal to 60"<<endl;
				 cin>>sec_getting;
				 if(hour_geeting<=12 && min_getting<=60 && sec_getting<=60){
				 
				 	hour=hour_geeting;
			 	min=min_getting;
			 	sec=sec_getting;
			 }
			 }
		}
		while (hour_geeting>=12 && min_getting>60 && sec_getting>60);
		//loop is ended
		
			 }
		//copy constructor
	 Time(const Time &t) {
        hour = t.hour;
        min = t.min;
        sec = t.sec;
        mode = t.mode;
        secAddition = t.secAddition;
        minAddition = t.minAddition;
    }
			 //Getting functions to get data
			int getHours(){
			 	return hour;
			 }
			 int getMinutess(){
			 	return min;
			 }
			 int getSeconds(){
			 	return sec;
			 }
			 int getModes(){
			 	return mode; 
			 }
			//setting function to set data
			//set hours
		void setHours(int hour_setting){
			//loop start
			do{
					if(hour_setting<=12){
			
				hour=hour_setting;
			}
			else{
				cout<<"you entered invalid hours. please enter valid hour"<<endl;
			cin>>hour_setting;
			if(hour_setting<=12){
				hour=hour_setting;
			}
			}
			}
			while(hour_setting>12);	//loop ended
			}
			//set seconds
			void setSeconds(int sec_setting){
				do{//loop start
				
				if(sec_setting<=59){
				sec=sec_setting;
			}
			else{
				cout<<"you entered invalid Seconds.please enter minutes less than 60"<<endl;
				cin>>sec_setting;
					if(sec_setting<=59){
				sec=sec_setting;
			}
			}
		}while(sec_setting>=60);//loop ended
		}
		//set minutes
			void setMinutes(int min_setting){
				do{
				
				if(min_setting<=59){				
				min=min_setting;
			}
			else{
				cout<<"you entered invalid Minutes. Please enter valid Minutes less than 60"<<endl;
				cin>>min_setting;
					if(min_setting<=59){				
				min=min_setting;
			}
			}
		}
		while(min_setting>=60);
			}
			//set mode
			void setModes(char mode_setting){
				do{//loop start
				
				if(mode_setting=='a' || mode_setting=='p'){
						mode=mode_setting;
									}
			else{
				cout<<"you entered invalid mode. Please enter valid mode a or p"<<endl;
				cin>>mode_setting;
					if(mode_setting=='a' || mode_setting=='p'){
						mode=mode_setting;
			}
			}
		}while(mode_setting!='a'|| mode_setting!='p');//loop ended
			}
 	double convertToSeconds(){
 		double hourConversion=hour*3600;
 	    double minConversion=min*60;
 		double Ttlsec=hourConversion+minConversion+sec;
 		return Ttlsec;
}
	 	double convertToMinutes(){
 		double hourConversion=hour*60;
 	    double secConversion=sec/60;
 		double Ttlmins=hourConversion+secConversion+min;
 		return Ttlmins;
	 }
	 	 	double convertToHours(){
 		double secConversion=sec/3600;
 	    double minConversion=min/60;
 		double Ttlsec=secConversion+minConversion+hour;
 		return Ttlsec;
	 }
	 void convertTo24HourFormat(){
	 int GettingHour=hour;
if(GettingHour>12 && GettingHour<24){

	cout<<GettingHour<<":"<<min<<":"<<sec<<"PM"<<endl;
}
else if(GettingHour<=12){
	GettingHour+=12;
	if (GettingHour==24){
	GettingHour=0;
}
		cout<<GettingHour<<":"<<min<<":"<<sec<<"AM"<<endl;
	
}
else if (GettingHour==24){
	GettingHour=0;
	cout<<GettingHour<<":"<<min<<":"<<sec<<"AM"<<endl;
}
else{
	cout<<"you entered invalid time format"<<endl;
}
	 }
	 void displayTime(){
	 	if(mode=='p'){
		 
	 	cout<<hour<<":"<<min<<":"<<sec<<"PM"<<endl; 
	}
	else if(mode=='a'){
		cout<<"your time is = "<<hour<<":"<<min<<":"<<sec<<"AM"<<endl; 
	}
	 }
	 
void incrementSeconds(int increase_sec){
	secAddition=sec+increase_sec;
	//main conditions
	if(secAddition==60){
		sec=0;
		min++;
		//inner conditions
		if(min==60){
		min=0;
		hour++;
			cout<<hour<<sec<<":"<<min<<endl;
			 if(hour<12){
			 cout<<hour<<":"<<min<<":"<<sec<<" AM"<<endl;
		}
			else if(hour>=12 && hour<24){
			 	hour-=12;
			 	 cout<<"0"<<hour<<":"<<minAddition<<":"<<sec<<" PM"<<endl;
			 	
			 }
			
		}
		else if(min<60){
			cout<<hour<<":"<<min<<":"<<sec<<mode<<endl;
		}
	}
//main conditions
else if(secAddition>60){
		for(int i; secAddition>60; i++){
		secAddition-=60;
		min++;
	
			}
			int min_inc_sec=min;
			//inner conditionns
		if(min_inc_sec>=60){
	 		for(int i=1; min_inc_sec>=60 ; i++){
	 		min_inc_sec-=60;
	 		
	 		hour++;
			 }
		 if(hour<12){
			 cout<<hour<<":"<<min_inc_sec<<":"<<secAddition<<" AM"<<endl;
		}
			else if(hour>=12 && hour<24){
			 	hour-=12;
			 	 cout<<"0"<<hour<<":"<<min_inc_sec<<":"<<secAddition<<" PM"<<endl;
			 	
			 }
		 }
	else if(min_inc_sec<60){
		 		cout<<"I am also working"<<hour<<":"<<min_inc_sec<<":"<<secAddition<<endl;
		 }
}	

else if(secAddition<60){
	cout<<hour<<":"<<min<<":"<<secAddition<<mode<<endl;
	
}
	
}
	void incrementmin(int increase_min){
	 minAddition=min+increase_min;
	 	if(minAddition==60){	
	 		min=0;
	 		hour++;
	 		
	 		if(hour<12){
			 cout<<hour<<":"<<min<<":"<<sec<<" AM"<<endl;
		}
			else if(hour>=12 && hour<24){
			 	hour-=12;
			 	 cout<<"0"<<hour<<":"<<minAddition<<":"<<sec<<" PM"<<endl;
			 	
			 }
	 		
	 		
	 		
		 }
		 	else if(minAddition>60){
	 		for(int i=1; minAddition>60 ; i++){
	 		minAddition-=60;
	 		hour++;
			 }
			 if(hour<12){
			 cout<<hour<<":"<<minAddition<<":"<<sec<<" AM"<<endl;
		}
			else if(hour>=12 && hour<24){
			 	hour-=12;
			 	 cout<<"0"<<hour<<":"<<minAddition<<":"<<sec<<" PM"<<endl;
			 	
			 }
		 }
		 else if(minAddition<60){
		 	 if(hour<12){
			 cout<<hour<<":"<<minAddition<<":"<<sec<<" AM"<<endl;
		}
			 else if(hour>=12 && hour<24){
			 	hour-=12;
			 	 cout<<"0"<<hour<<":"<<minAddition<<":"<<sec<<" PM"<<endl;
			 	
			 }
		 }
	}
 };
 int main(){
 	cout<<"************************************parametrized constructor is working*************************************"<<endl;
 	Time obj(11,22,10,'a'); 
 	 	cout<<"************************************DisplayTime function is working*************************************"<<endl;
 	obj.displayTime();
 	 	cout<<"************************************Set hours function is working*************************************"<<endl;
obj.setHours(9);
	cout<<"************************************Get hours function is working*************************************"<<endl;
cout<<"Got hours by sethours function are: "<<obj.getHours()<<endl;
	cout<<"************************************Set minutes function is working*************************************"<<endl;
obj.setMinutes(22);
	cout<<"************************************Get minutes function is working*************************************"<<endl;
cout<<"Got mins by setMinute function are: "<<obj.getMinutess()<<endl;
	cout<<"************************************Set seconds function is working*************************************"<<endl;
obj.setSeconds(22);
	cout<<"************************************get seconds function is working*************************************"<<endl;
cout<<"Got mins by setMinute function are: "<<obj.getSeconds()<<endl;
	cout<<"************************************DisplayTime function is working*************************************"<<endl;
obj.displayTime();
	cout<<"************************************convert hours function is working*************************************"<<endl;
cout<<"Total hours are: "<<obj.convertToHours()<<endl;
	cout<<"************************************convert minutes function is working*************************************"<<endl;
cout<<"Total Minutes are: "<<obj.convertToMinutes()<<endl;
	cout<<"************************************convert seconds function is working*************************************"<<endl;
cout<<"Total Seconds are: "<<obj.convertToSeconds()<<endl;
cout<<"i am going to display of time: ";
obj.displayTime();
	cout<<"************************************24hours conversion function is working*************************************"<<endl;
cout<<"your time after conersion of 24 hours conversion: ";
obj.convertTo24HourFormat();
	cout<<"************************************increment of minutes function is working*************************************"<<endl;
cout<<"your time is updated after increment of minutes are given: ";
obj.incrementmin(20);
	cout<<"************************************increment of Seconds function is working*************************************"<<endl;
cout<<"your time is updated after increment of seconds are given below: ";
obj.incrementSeconds(20);
 }
