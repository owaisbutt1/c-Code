 #include<iostream> //m.subtain haqani awaisi
                   //sap id:44821
#include<string>

using namespace std;
class Cricketer{
	private:
	string name;
	int shirtno;
	string dob;
	int odi_rating;
	int test_rating;
	int t20_rating;
	int startyear;
	public:
	Cricketer():name("\0"),shirtno(0),dob("\0"),odi_rating(0),test_rating(0),t20_rating(0),startyear(0)	
	{
		cout<<"Defualt constructer"<<endl;
	}
	
Cricketer(string n,int sn,string d,int odi_r,int test,int t20_r,int starty)
{
	name=n;
	shirtno=sn;
	dob=d;
	odi_rating=odi_r;
	t20_rating=t20_r;
	startyear=starty;
	cout<<"Parametrized constructer";
	
}
	void changeODIRating(int change){
				odi_rating=change;
				cout<<"your changed ODIRating is: "<<odi_rating<<endl;
				
			}
			void changeTestRating(int change){
				test_rating=change;
				cout<<"your changed test rating is: "<<test_rating<<endl;
			}
			void changeT20Rating(int change){
				t20_rating=change;
				cout<<"your t20 rating is: "<<t20_rating<<endl;
			}
	void display(){
				cout<<"The name of  player is: "<<name<<endl;
				cout<<"Shirt number of player is: "<<shirtno<<endl;
				cout<<"Date of birth of player is:"<<dob<<endl;
			}
		};
class Bowler: public Cricketer{
	private:
	string type;
	int total_wickets;
	int match_played;
	public:
		Bowler(): type("\0"),total_wickets(0),match_played(0)
		{
			
		}
	Bowler(string T,int total_w,int match_p,string n,int sn,string d,int odi_r,int test_R,int t20_r,int starty):Cricketer(n,sn,d,odi_r,test_R,t20_r,starty){
	type=T;
	total_wickets=total_w;
	match_played=match_p;
}
			void display(){
					cout<<"the type of the player is: "<<type<<endl;
				cout<<"the total wicket of this player is: "<<total_wickets<<endl;
				cout<<"matches had played by this player is: "<<match_played<<endl;
			}
 int calculateBowlAverage()
 {
 	int avg=total_wickets/match_played;
 	return avg;
 }
 void updateMatches(int t)
 {
 	match_played=match_played+t;
 	cout<<"Total Matches: "<<match_played<<endl;
 }
  void updateWickets(int t)
 {
 	total_wickets=total_wickets+t;
 	cout<<"Total Wickets: "<<total_wickets<<endl;
 }
 ~Bowler()
 {
 	
 }
}; 
class Batsman: public Cricketer{
	private:
	string type;
	int total_runs;
	int match_played;
	int best_score;
	public:
		Batsman(): type("\0"),total_runs(0),match_played(0),best_score(0)
		{
			
		}
	Batsman(string T,int total_r,int match_p,int best_s,string n,int sn,string d,int odi_r,int test_r,int t20_r,int starty):Cricketer(n,sn,d,odi_r,test_r,t20_r,starty){
	type=T;
	total_runs=total_r;
	match_played=match_p;
	best_score=best_s;
}
	void display(){
				cout<<"the type of the player is: "<<type<<endl;
				cout<<"the total runs of this player is: "<<total_runs<<endl;
				cout<<"matches had played by this player is: "<<match_played<<endl;
				cout<<"best score of this player is: "<<best_score<<endl;
				
				
			}
int calculateBAtAverage(){
				int Averages=total_runs/match_played;
				return Averages;
			}
 void updateMatches(int t)
 {
 	match_played=match_played+t;
 	cout<<"Total Matches: "<<match_played<<endl;
 }
  void updatebatRuns(int t)
 {
 	total_runs=total_runs+t;
 	cout<<"Total Runs: "<<total_runs<<endl;
 }
 ~Batsman()
 {
 	
 }
};
class AllRounder:public Bowler,public Batsman{
	AllRounder(){
		
	}
	~AllRounder(){
		
	}
 };
 int main(){
 
 	Cricketer obj1;
	Bowler bowl("Bowler",4,30,"rahil",11,"1995-02-10",20,29,10,2012);
	bowl.display();
	
	bowl.changeODIRating(19);
	bowl.changeTestRating(12);
	bowl.updateMatches(49);
	cout<<"the average of the matches are: "<<bowl.calculateBowlAverage()<<endl;
	Batsman bat("Batsman",200,30,150,"rahil",11,"1995-02-10",20,29,10,2012);
cout<<"your average of bat playing is:"<<bat.calculateBAtAverage()<<endl;
bat.updateMatches(30);
bat.updatebatRuns(200);
bat.display(); 
}

