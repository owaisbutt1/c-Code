#include<iostream> //it is used for input and output
#include<string>
#include<conio.h> //it is use for  builtin function like kbhit,getch etc
#include<windows.h>//it is used to handle the cursor
#include<ctime>
using namespace std;
int width=20,height=20,x,y,fx,fy,score=0,flag,tailx[100],taily[100],number=0;
bool flag1=false,flag2=false;

							// Declaration of Functions.

void Starting_Position();					// Declaration of process Function.
void outline();								// Declaration of Outline Function. 
void input();
void Move_Snake();							// Declaration of Move Snake Function.
int gameover();
void new_food();
void food();
int main()
{
	
	Starting_Position();
	while(gameover()==1)
	{
		
		outline();
		input();
		food();
		Move_Snake();
		gameover();
		if(x==fx && y==fy)
		{
			
			new_food();
			
		}
		cout<<"\t\t\t\t\t\t\t\t\tS c o r e : "<<score<<endl;
		Sleep(90);
		
	}
	cout<<"\n\n\t\t\t\t\t\t\t\t\t G A M E  O V E R"<<endl;
	return 0;
}
							// Defination of Functions.
void Starting_Position()					// Defination of process Function.
{
	do
	{
		fx=rand()%20;
		if(fx>=1)
		{
			flag1=true;
		}
	}
	while(flag1==false);
	
	do
	{
		fy=rand()%20;
		if(fy>=1)
		{
			flag2=true;
		}
		
	}
	while(flag2==false);
								// line no 78,79 for Snake Position.
	x=width/2;
	y=height/2;
}

void outline()					//Defination of Outline Function.
{

	int i=0,j=0;
	system("cls");
	cout<<"\n\n\t\t\t\t\t  *********************************"<<endl;
	cout<<"\t\t\t\t\t  *     S N A K E   G A M E       *"<<endl;
	cout<<"\t\t\t\t\t  *********************************\n\n"<<endl;
	for(i=0;i<width;i++)
	{
		cout<<"\t\t\t\t\t\t";
		for(j=0;j<height;j++)
		{
			if(i==0||i==height-1||j==0||j==width-1)
			{
				cout<<"*";
			}
			else
			{
				if(i==x&&j==y)
				{
					cout<<"O";
				}
				else if(i==fx&&j==fy)
				{
					cout<<"o";
				}
				else
				{
					bool flag=false;
					for(int k=0;k<number;k++)
					{
						if(i==tailx[k]&&j==taily[k])
						{
							cout<<"o";
							flag=true;
						}
					}
					if(flag==false)
					cout<<" ";
				}
			}
			
		}
		cout<<endl;
	}
}



void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'w':
				flag=1;
				break;
			case 's':
				flag=2;
				break;
			case 'a':
				flag=3;
				break;
			case 'd':
				flag=4;
				break;
			case 'x':
				
				break;
		}
	}
}

void Move_Snake()
{
	
		switch(flag)
		{
			case 1:
				x--;
				break;
			case 2:
				x++;
				break;
			case 3:
				y--;
				break;
			case 4:
				y++;
				break;
			default :
				break;
		}
}

int gameover()
{
	
	if(x<0||x>width||y<0||y>height)
	{
		
		return 0;
	}
	for(int i=0;i<number;i++)
	{
		if(x==tailx[i]&&y==taily[i])
		{
			
			return 0;	
		}
		
	}
	
	return 1;
}

void new_food()
{
	int temp;
		do
		{
			temp=rand()%19;
			if(temp!=0)
			{
				fx=temp;
				flag1=true;
			}
		}
		while(flag1==false);
		do
		{
			temp=rand()%19;
			if(temp!=0)
			{
				fy=temp;
				flag2=true;
			}
		}
		while(flag2==false);
		number++;
		score=score+10;	
}
void food()
{
	int i;
	int p1x=tailx[0],p2x;
	int p1y=taily[0],p2y;
	tailx[0]=x;
	taily[0]=y;
	for(i=1;i<number;i++)
	{
		 p2x=tailx[i];
		 p2y=taily[i];
		 tailx[i]=p1x;
		 taily[i]=p1y;
		 p1x=p2x;
		 p1y=p2y;
	}
}
