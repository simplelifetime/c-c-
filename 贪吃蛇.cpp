#include <ctime>
#include <istream>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include<string>
#define height 25
#define width 60
#define RIGHT 'd'
#define LEFT 'a'
#define UP 'w'
#define DOWN 's'
using namespace std;
int len=4;
char M=RIGHT;
int ok=1; 
string s;
int foodx,foody;  //食物位置 
struct point
{
	int x;
	int y;
	int xt;
	int yt;
};
struct point snake[200];
void gotoxy(int x,int y)
{
	HANDLE hOut;
	hOut= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = {x,y};
	SetConsoleCursorPosition(hOut,pos);
}
void beginner()
{
	for(int i=1; i<=10; i++)
		cout<<endl;
	for(int i=1; i<=48; i++)
		cout<<" ";
	cout<<"欢迎来到贪吃蛇游戏"<<endl;
	for(int i=1; i<=40; i++)
		cout<<" ";
	cout<<"输入你的名字并回车，开始进行游戏"<<endl;
}
void printfood()
{
	if(ok==1)
	{
	srand(time(NULL));
	foodx=rand()%height+1;
	foody=rand()%width+1;
	gotoxy(foody,foodx);
	cout<<'!'; 
	ok=0;
    }
}
void printborder()
{
	for(int i=0;i<=width+1;i++)
	{
		gotoxy(i,0);
		cout<<'#';
		gotoxy(i,height+1);
		cout<<'#';
	}
	for(int i=0;i<=height+1;i++)
	{
		gotoxy(0,i);
		cout<<'#';
		gotoxy(width+1,i);
		cout<<'#';
	}
}
bool grow()
{
	if(snake[1].x==foody&&snake[1].y==foodx)
	{
		ok=1;
		return 1;
    }
	return 0;
}
void init()
{
	printborder();
	printfood();
	for(int i=1;i<=len;i++)
	{
		gotoxy(snake[i].x,snake[i].y);
		cout<<'*';
	}
}

void move()
{  
     if(!grow())
     {
     	gotoxy(snake[len].x,snake[len].y);
     	cout<<" ";
	 }
	 else if(grow())
	 {
	 	len++;
	 	snake[len].xt=snake[len-1].x;
	 	snake[len].yt=snake[len-1].y;
     }
     if(kbhit())
     M=getch();
	  for(int i=2;i<=len;i++)
	  {
	  	snake[i].x=snake[i].xt;
	  	snake[i].y=snake[i].yt;
	  	snake[i].xt=snake[i-1].x;
	  	snake[i].yt=snake[i-1].y;
	  }
	   switch(M)
	 {
	 	case UP:snake[1].y--; break;
	 	case RIGHT:snake[1].x++; break;
	 	case LEFT:snake[1].x--; break;
	 	case DOWN:snake[1].y++; break;
	 	default: break;
	  } 
}
int speedi(int n)
{
	if(n<=8)
	return 200;
	else if(n>=8 && n<=14)
	return 150;
	else if(n>=14 && n<=20)
	return 100;
	else if(len>20)
	return 50;
}
int speed(char M)
{
	if(M==RIGHT ||M==LEFT)
	{
		return speedi(len)/2;
	}
	if(M==UP ||M==DOWN)
	{
		return speedi(len)*1.2;
	}
}
bool alive()
{
	if(snake[1].x==1||snake[1].x==width+1||snake[1].y==1||snake[1].y==height+1)
	return 0;
	for(int i=2;i<=len;i++)
	{
		if(snake[1].x==snake[i].x&&snake[1].y==snake[i].y)
		return 0;
	}
	return 1;
 } 
 void printstas()
 {
 	gotoxy(width+8,4);
 	cout<<"1.请使用小写w,a,s,d作为方向键使用";
	gotoxy(width+8,6);
	cout<<"你当前的分数是"<<len*100;
	gotoxy(width+8,8);
	cout<<"现在的速度是"<<1000/speedi(len); 
 }
int main()
{
	for(int i=1;i<=len;i++)
	{
		snake[i].x=width/2+1-i;
		snake[i].y=height/2;
		snake[i].xt=snake[i-1].x;
		snake[i].yt=snake[i-1].y;
	}
	snake[1].xt=0;
	snake[1].yt=0;
	beginner();
	cin>>s;
	system("cls");
	while(1)
	{
		init();
		move();
		printstas();
		Sleep(speed(M));
		if(!alive())
		{
			Sleep(1000);
			system("cls");
			gotoxy(50,12);
			cout<<"Game Over"<<endl;
			gotoxy(48,13);
			cout<<s<<"的分数是"<<len*100;
			gotoxy(48,14);
			cout<<"请按回车键退出"; 
			break;
		}
	}
	getch();
}
