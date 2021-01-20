#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch[2][2]={{'1','2','3'},	{'4','5','6'},	{'7','8','9'}};
	int entry;
	int player_no=1;
	int flag=0;
	char play_1='X',play_2='O';
	while (flag!=1)
	{
		cout<<"Enter your spot Player number "<<player_no;
		cin>>entry;
		if(player_no==1)
		{
			switch(entry)
			{				
			case 1: ch[0][0]=play_1;break;
			case 2: ch[0][1]=play_1;break;
			case 3: ch[0][2]=play_1;break;
			case 4: ch[1][0]=play_1;break;
			case 5: ch[1][1]=play_1;break;
			case 6: ch[1][2]=play_1;break;
			case 7: ch[2][0]=play_1;break;
			case 8: ch[2][1]=play_1;break;
			case 9: ch[2][2]=play_1;break;
			default:cout<<"\n Enter the Entry from 1-9 only...";
		    }
		}
				if(player_no==2)
		{
			switch(entry)
			{
			case 1: ch[0][0]=play_2;break;
			case 2: ch[0][1]=play_2;break;
			case 3: ch[0][2]=play_2;break;
			case 4: ch[1][0]=play_2;break;
			case 5: ch[1][1]=play_2;break;
			case 6: ch[1][2]=play_2;break;
			case 7: ch[2][0]=play_2;break;
			case 8: ch[2][1]=play_2;break;
			case 9: ch[2][2]=play_2;break;
			default:cout<<"\n Enter the Entry from 1-9 only...";
		    }
		}
		if(ch[0][0]==play_1&&ch[0][1]==play_1&&ch[0][2]==play_1)
		{
		cout<<"PLAYER 1 WINS...";
		flag=1;
	    }
		else if(ch[1][0]==play_1&&ch[1][1]==play_1&&ch[1][2]==play_1)
		{
		cout<<"PLAYER 1 WINS...";
		flag=1;
	    }
		else if(ch[2][0]==play_1&&ch[2][1]==play_1&&ch[2][2]==play_1)
		{
		cout<<"PLAYER 1 WINS...";
		flag=1;
	    }
		else if(ch[0][0]==play_1&&ch[1][0]==play_1&&ch[2][0]==play_1)
		{
		cout<<"PLAYER 1 WINS...";
		flag=1;
	    }
		else if(ch[0][1]==play_1&&ch[1][1]==play_1&&ch[2][1]==play_1)
		{
		cout<<"PLAYER 1 WINS...";
		flag=1;
	    }
		else if(ch[0][2]==play_1&&ch[1][2]==play_1&&ch[2][2]==play_1)
		{
		cout<<"PLAYER 1 WINS...";
		flag=1;
	    }
		else if(ch[0][0]==play_1&&ch[1][1]==play_1&&ch[2][2]==play_1)
		{
		cout<<"PLAYER 1 WINS...";
		flag=1;
	    }
		else if(ch[0][2]==play_1&&ch[1][1]==play_1&&ch[2][0]==play_1)
		{
		cout<<"PLAYER 1 WINS...";
		flag=1;
	    }
		
		if(ch[0][0]==play_2&&ch[0][1]==play_2&&ch[0][2]==play_2)
        {
       	cout<<"PLAYER 2 WINS...";
       	flag=1;
		}
		else if(ch[1][0]==play_2&&ch[1][1]==play_2&&ch[1][2]==play_2)
        {
       	cout<<"PLAYER 2 WINS...";
       	flag=1;
		}
		else if(ch[2][0]==play_2&&ch[2][1]==play_2&&ch[2][2]==play_2)
        {
       	cout<<"PLAYER 2 WINS...";
       	flag=1;
		}
		else if(ch[0][0]==play_2&&ch[1][0]==play_2&&ch[2][0]==play_2)
        {
       	cout<<"PLAYER 2 WINS...";
       	flag=1;
		}
		else if(ch[0][1]==play_2&&ch[1][1]==play_2&&ch[2][1]==play_2)
        {
       	cout<<"PLAYER 2 WINS...";
       	flag=1;
		}
		else if(ch[0][0]==play_2&&ch[1][1]==play_2&&ch[2][2]==play_2)
        {
       	cout<<"PLAYER 2 WINS...";
       	flag=1;
		}
		else if(ch[0][2]==play_2&&ch[1][1]==play_2&&ch[2][0]==play_2)
        {
       	cout<<"PLAYER 2 WINS...";
       	flag=1;
		}
		
		
		player_no=3-player_no;
	}
	return 0;
}
