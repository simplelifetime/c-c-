#include <ctime>
#include <istream>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include<math.h>
#define maxn 1000005
using namespace std;
void init(void);
void printqp(void);
void gotoxy(int, int);
void algo(void);
void getclinet(void);
int ok(int,int);
int gameend1(char);
void dfs1(int,int,int,int,char);
void getstatus(char);
int dfs(int,int,int,int,char);
void findstatus(void);
void printstatus(void);
void getai(void);
void getstatus2(char,int,int);
char qipan[15][15];    //储存当前棋盘
int status[15][15];    //储存当前每个位置的权值
int xnow, ynow,xai,yai;
int gameend;
int dir[9][2]= {{0,0},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1},{0,1},{0,-1}}; //用于用户键入数据并打印
void printstatus()
{
	cout << endl;
	for (int i= 0; i < 15; i++)
	{
		cout<<"  ";
		for (int j = 0; j < 15; j++)
			printf("%3d", status[j][i]);
		cout << endl;
	}
	cout<<endl;
}
void findstatus()
{
	int mx,my;
	int max=-200;
	for(int i=0; i<15; i++)
		for(int j=0; j<15; j++)
		{
			if(status[j][i]>max)
			{
				max=status[j][i];
				my=i;
				mx=j;
			}
		}
	yai=my;
	xai=mx;
}
void getai()
{
	qipan[xai][yai]='X';
	printqp();
	cout<<xai<<' '<<yai<<endl;
}
void getstatus(char c)
{
	for(int j=0; j<15; j++)
	{
		for(int i=0; i<15; i++)
		{
			if(qipan[i][j]=='*')
			{
				qipan[i][j]=c;
				if(gameend1(c)==1)
				{
					status[i][j]=8*maxn;
					return;
				}
				else
				{
					int ste;
					ste=dfs(i,j,0,0,c);
					status[i][j]+=ste;
				}
				getstatus2(c,i,j);
				qipan[i][j]='*';
			}
		}
	}
}
void getstatus2(char c,int x,int y)
{
	for(int j=0; j<15; j++)
	{
		for(int i=0; i<15; i++)
		{
			if(qipan[i][j]=='*')
			{
				if(c=='0')
				{
					qipan[i][j]='X';
					if(gameend1('X'))
					{
						status[x][y]+=maxn;
						qipan[i][j]='*';
						continue;
					}
					int ste;
					ste=dfs(i,j,0,0,'X');
					status[x][y]+=0.5*ste;
				}
				else if(c=='X')
				{
					qipan[i][j]='0';
					if(gameend1('0'))
					{
						status[x][y]+=maxn;
						qipan[i][j]='*';
						continue;
					}
					int ste;
					ste=dfs(i,j,0,0,'0');
					status[x][y]+=0.5*ste;
				}
				qipan[i][j]='*';
			}
		}
	}
}
int dfs(int x,int y,int dire,int step,char c)
{
	if(qipan[x][y]!=c||x<0||y<0||x>14||y>14)
	{
		return step;
	}
	else if(dire==0)
	{
		int max=0;
		for(int i=1; i<=8; i+=2)
		{
			max+=pow(dfs(x+dir[i][0],y+dir[i][1],i,0,c)+dfs(x+dir[i+1][0],y+dir[i+1][1],i+1,0,c),3);
		}
		return max;
	}
	else
		return dfs(x+dir[dire][0],y+dir[dire][1],dire,step+1,c);
}
void init(void)    //初始化棋盘
{
	memset(qipan, '*', sizeof(qipan));
}
void printqp(void)    //打印棋盘
{
	printf("  ");
	for (int i = 0; i < 15; i++)
		printf("%3d", i);
	cout << endl;
	for (int i= 0; i < 15; i++)
	{
		cout << i;
		if (i < 10)
			cout << ' ';
		for (int j = 0; j < 15; j++)
			printf("%3c", qipan[j][i]);
		printf("%4d",i);
		cout << endl;
	}
	printf("  ");
	for (int i = 0; i < 15; i++)
		printf("%3d", i);
	cout<<endl;
}
void gotoxy(int x, int y)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(hOut, pos);
}
int getclient()
{
	xnow = 0;
	ynow = 0;
	cin>>xnow>>ynow;
	if(ok(xnow,ynow)==1)
	{
		qipan[xnow][ynow]='0';
		printqp();
		return 1;
	}
	else if(!ok(xnow,ynow))
	{
		cout<<"Error!"<<endl;
		return 0;
	}
}
int ok(int x, int y)
{
	if (qipan[x][y] != '*')
		return 0;
	if (x < 0 || x>14 || y < 0 || y>14)
		return 0;
	return 1;
}
void dfs1(int x,int y,int dire,int step,char c)
{
	if(step==4)
	{
		gameend=1;
		return;
	}
	if(gameend==1)
		return;
	if(dire==0)
	{
		for(int i=1; i<=8; i++)
			if(qipan[x+dir[i][0]][y+dir[i][1]]==c)
				dfs1(x+dir[i][0],y+dir[i][1],i,step+1,c);
	}
	else if(qipan[x+dir[dire][0]][y+dir[dire][1]]==c)
		dfs1(x+dir[dire][0],y+dir[dire][1],dire,step+1,c);
}
int gameend1(char c)
{
	for(int i=0; i<15; i++)
	{
		for(int j=0; j<15; j++)
		{
			gameend=0;
			if(qipan[j][i]==c)
				dfs1(j,i,0,0,c);
			if(gameend==1)
				return 1;
		}
	}
	return 0;
}
int main()
{
	init();
	printqp();
	while (1)
	{
		while(1)
		{
			if(getclient()==1)
				break;
		}
		if(gameend1('0')==1)
		{
			char c;
			cout<<"You win!"<<endl;
			cout<<"You want another round?if you want,click y"<<endl;
			cin>>c;
			if(c=='y')
			{
				system("cls");
				init();
				printqp();
				continue;
			}
			else
				break;
		}
		memset(status,0,sizeof(status));
		getstatus('X');
		getstatus('0');
		cout<<endl;
		findstatus();
		printstatus();
		getai();
		if(gameend1('X')==1)
		{
			char c;
			cout<<"AI win!"<<endl;
			cout<<"You want another round?if you want,click y"<<endl;
			cin>>c;
			if(c=='y')
			{
				system("cls");
				init();
				printqp();
				continue;
			}
			else
				break;
		}
	}
}
