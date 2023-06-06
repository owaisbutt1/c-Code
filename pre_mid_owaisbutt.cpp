  #include<iostream>
  using namespace std;
  class publication{
  	private:
  		float type;
  		string title;
  		public:
  		
  		publication():type(0),title("\0"){
  			
		  }
		void  getdata(){
			cout<<
		  	
		  }
		void  displaydata(){
		  	
		  }
  };
  class book:public publication{
  	private:
  		int type;
  		public:
  			book():type(0){
  				
			  }
		void getdata(){
		  	cout<<"please enter the page counts"<<endl;
		  	cin>>type;
		  }
		void displaydata(){
		  	cout<<"your page counts are"<<type<<endl;
		  }
  };
  class tape:public publication{
  	private:
  		float time;
  		public:
  			tape():time(0){
			  }
  			void getdata(){
		  	cout<<"please enter the page counts"<<endl;
		  	cin>>time;
		  }
		void displaydata(){
		cout<<"your time taken is "<<time<<endl;
		
		  }
  	
  };
  class publication:public tape,public book{
  	
  };
  
  int main(){
  	
  	publication obj1;
  	
  }
