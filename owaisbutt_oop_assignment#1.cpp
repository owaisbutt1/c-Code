#include<iostream>
using namespace std;

class Cricketer{
	//member data of cricketer class
	private:
		string name,dob;
		int odi_rating,test_rating,t20_rating,startyear,shirtno;
		//member function of cricketer class
		public:
			//default constructor
			Cricketer():name("\0"),dob("\0"),odi_rating(0),test_rating(0),t20_rating(0),startyear(0),shirtno(0){
				cout<<"i am default constructor of cricket class"<<endl;
				
			}
			//parametrized constructor
			Cricketer(string name_1,int shirt_no,string d_o_b,int odiRating,int testRating,int t20Rating,int start_Year){
				name=name_1;
				shirtno=shirt_no;
				dob=d_o_b;
				odi_rating=odiRating;
				test_rating=testRating;
				t20_rating=t20Rating;
				startyear=start_Year;
				cout<<" i am parametrized constructor of parent class(Cricketer)"<<endl;
			}
		
			int calculateAge(){
			cout<<"*****************AGE OF PLAYER*********************"<<endl;
				int birthdate=2023-stoi(dob);
				return birthdate;
				
			}
			void calculateExperience(){
				cout<<"*****************EXPERIENCE OF PLAYER*********************"<<endl;
				int experience=2023-startyear;
				cout<<"the experiece of this player is: "<<experience<<"year"<<endl;
			}
			void changeODIRating(int ODI){
				odi_rating=ODI;
				cout<<"the updated ODI rating of this player is: "<<odi_rating<<endl;
			}
			void changeTestRating(int test){
				test_rating=test;
				cout<<"the updated test rating of this player is: "<<test_rating<<endl;
			}
			void changeT20Rating(int t20){
				t20_rating=t20;
				cout<<"the updated T20 rating of this player is: "<<t20_rating<<endl;
			}
				void playerinfo(){
				cout<<"the name of player is: "<<name<<endl;
				cout<<"the shirt number of player is: "<<shirtno<<endl;
				cout<<"the date of birth is: "<<dob<<endl;
				cout<<"the odi rating of this player is: "<<odi_rating<<endl;
				cout<<"the test rating of this player is: "<<test_rating<<endl;
				cout<<"the T20 rating of this player is: "<<t20_rating<<endl;
				cout<<"starting career of this player from "<<startyear<<endl;
			}
			~Cricketer(){
			}
};
class Bowler:public Cricketer{
	//member data of bowler function
	private:
		string type;
		int total_wickets,match_played;
		//member function of bowler class
		public:
			Bowler():type("\0"),total_wickets(0),match_played(0){
				
			}
			Bowler(string bowler_type,int wickets_by_bowler,int match_played_by_bowler,string cricketer_name,int shirtno,string D_O_B,int odi_rating,int test_rating,int t20_rating, int startyear):Cricketer(cricketer_name,shirtno,D_O_B,odi_rating,test_rating,t20_rating,startyear){
				cout<<"i am the parametrized constructor of bowler class"<<endl;
				type=bowler_type;
				total_wickets=wickets_by_bowler;
				match_played=match_played_by_bowler;
				
				
			}
		int calculateBowlAverage(){
			int Average;
			Average=total_wickets/match_played;
				
			}
			//updated matches
		void updateMAtches(int match_played){
			match_played+=match_played;
			cout<<"Bowler has played the matches after this updation is: "<<match_played<<endl;
			}
			//updated wickets
			void updateWickets(int wicketUpdate){
			total_wickets+=wicketUpdate;
			cout<<"bowler take total wickets after this updation is: "<<total_wickets<<endl;
				
			}
			~Bowler(){
				cout<<"*****************THIS IS DESTRUCTOR OF BOWLER CLASS*********************"<<endl;
				cout<<"i am destructor of bowler class"<<endl;
			}
};
//Batsman class
class Batsman:public Cricketer{
	//member data of batsman class
	private:
		string type;
		int total_runs,match_played,best_score;
		//member function of batsman class
		public:
			//default constructor
			Batsman():type("\0"),total_runs(0),match_played(0),best_score(0){
				cout<<"i am default constructor of batsman"<<endl;
				
				
			}
			//parametrized function
			Batsman(string batsman_type,int batsman_tl_runs,int batsman_tl_matches,int best_score_by_batsman,string cricketer_name,int shirtno,string D_O_B,int odi_rating,int test_rating,int t20_rating, int startyear):Cricketer(cricketer_name,shirtno,D_O_B,odi_rating,test_rating,t20_rating,startyear){
				cout<<"I am parametrized constructor of Batsman class"<<endl;
				type=batsman_type;
				total_runs=batsman_tl_runs;
				match_played=batsman_tl_matches;
				best_score=best_score_by_batsman;
				
			}
			//calculate averaage
			int calculateBatAverage(){
				int Average;
				Average=total_runs/match_played;	
				
			}
			//update matches played by batsman
			void updateMatches(int matches_updated){
				match_played+=matches_updated;
			}
			//update runs made by batsman
			void updateRuns(int runs_updated){
				total_runs+=runs_updated;
			}
			//destructor
			~Batsman(){
					cout<<"*****************THIS IS DESTRUCTOR OF BATSMAN CLASS*********************"<<endl;
			cout<<"destructor of batsman is dustruct everything"<<endl;	
			}
};
		//allrounder class
		class AllRounder:public Bowler,public Batsman{
	//public member function
	public:
		AllRounder(){
			cout<<"*****************object of Allrounder is calling to its constructor*********************"<<endl;
			cout<<"i am constructor of allrounder class"<<endl;
		}
		~AllRounder(){
			cout<<"*****************destructor is calling*********************"<<endl;
				cout<<"i am destructor of allrounder class"<<endl;
		}
};

int main(){
	//object of bowler class
	//Cricketer cricket;
	Bowler bowl_1("Bowler",4,20,"amir",21,"1990-03-20",20,15,25,2012);
	cout<<"*****************PLAYER INFO OF BOWLER BEFORE UPDATION*********************"<<endl;
	bowl_1.playerinfo();
	cout<<"the age of this player is: "<<bowl_1.calculateAge()<<endl;
	bowl_1.calculateBowlAverage();
	
	bowl_1.updateMAtches(30);
	bowl_1.updateWickets(15);
bowl_1.calculateExperience();
cout<<"*****************updation*********************"<<endl;
	bowl_1.changeODIRating(18);
	bowl_1.changeT20Rating(17);
	bowl_1.changeTestRating(22);
	cout<<"*****************PLAYER INFO OF BOWLER AFTER UPDATION*********************"<<endl;
	bowl_1.playerinfo();
	cout<<"**********************************************************************************************"<<endl;
	cout<<"**********************************************************************************************"<<endl;
	cout<<"**********************************************************************************************"<<endl;
	cout<<"**********************************************************************************************"<<endl;
	//object of batsman class
	Batsman bat_1("Batsman",200,30,120,"shoaib",11,"1990-03-20",20,15,25,2011);
	cout<<"*****************PLAYER INFO OF BATSMAN BEFORE UPDATION*********************"<<endl;
	bat_1.playerinfo();
	cout<<"the age of this player is: "<<bowl_1.calculateAge()<<endl;
	bat_1.calculateBatAverage();
	
	bat_1.updateMatches(30);
	bat_1.updateRuns(200);
bat_1.calculateExperience();
cout<<"*****************UPDATION OF RATING*********************"<<endl;
	bat_1.changeODIRating(30);
	bat_1.changeT20Rating(18);
	bat_1.changeTestRating(25);
	cout<<"*****************PLAYER INFO OF BATSMAN AFTER UPDATION*********************"<<endl;
	bat_1.playerinfo();
	//object of allrounder class
	AllRounder all;
	
}
