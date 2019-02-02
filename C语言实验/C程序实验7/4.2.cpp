#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s_list{
	char num[20];
	char name[25];
	float gra[4];
	struct s_list *next,*before;
	float sum,avg;
};
struct fc{
	char a1[25];
	char a2[25];
	float q;
}s1[20];
int n;
void creat_list(struct s_list **headp,int n)
{
	int i,j;
	struct s_list *loc_head=NULL,*tail=NULL,*prior;
	loc_head=(struct s_list*)malloc(sizeof(struct s_list));
	tail=loc_head;
	scanf("%s %s %f %f %f %f",tail->num,tail->name,&tail->gra[0],&tail->gra[1],&tail->gra[2],&tail->gra[3]);
	tail->sum=tail->gra[0]+tail->gra[1]+tail->gra[2]+tail->gra[3];
    tail->avg=tail->sum/4;
    tail->before=NULL;
	for(i=1;i<n;i++)
	{
		tail->next=(struct s_list*)malloc(sizeof(struct s_list));
		prior=tail;
		tail=tail->next;
		scanf("%s %s %f %f %f %f",tail->num,tail->name,&tail->gra[0],&tail->gra[1],&tail->gra[2],&tail->gra[3]);
		tail->sum=tail->gra[0]+tail->gra[1]+tail->gra[2]+tail->gra[3];
		tail->avg=tail->sum/4;
		tail->before=prior;
	}
	tail->next=NULL;
	loc_head->before=NULL;
	*headp=loc_head;
}
void swap(float *a,float *b)
{
	float c;
	c=*a;
	*a=*b;
	*b=c;
 } 
void swap1(char t[],char s[])
{
	char m[25];
	strcpy(m,t);
	strcpy(t,s);
	strcpy(s,m);
}
void printlist(struct s_list *head)
{
	struct s_list *p=head;
	while(p)
	{
		printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->num,p->name,p->gra[0],p->gra[1],p->gra[2],p->gra[3]);
		p=p->next;
	}
	printf("\n");
}
void sort1(struct s_list *head,int len)
{
	int i,j;
	struct s_list *p=head;
	for(i=len;i>0;i--)
	{
		p=head;
		for(j=0;j<i-1;j++)
		{
				if(p->avg>p->next->avg)
				{
					swap(&p->avg,&p->next->avg);
					swap1(p->name,p->next->name);
					swap1(p->num,p->next->num);
				}
				p=p->next;
		}
	}
}
int main()
{
	char t[4][10]={"ID","Name","SUM","AVG"};
	char sub[4][10]={"English","Math","Physics","C"};
	struct s_list *p,*head,*tail;
	int n,i,j,m;
	scanf("%d",&n);
	creat_list(&head,n);
	p=head;
	printf("%-15s%-20s",t[0],t[1]);
	for(i=0;i<4;i++)
	printf("%-10s",sub[i]);
	printf("\n");
	printlist(head);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	scanf("%s %s %f",s1[i].a1,s1[i].a2,&s1[i].q);    //记录数据 
	p=head;
	while(p)
	{
		for(i=0;i<m;i++)          //遍历每个更改数据 
		if(!strcmp(p->num,s1[i].a1))     //判断学号是否对应 
		{
			for(j=0;j<4;j++)
			if(!strcmp(s1[i].a2,sub[j]))     //判断相应学科 
			p->gra[j]=s1[i].q;     //更改分数 
		}
		p->sum=p->gra[0]+p->gra[1]+p->gra[2]+p->gra[3];
		p->avg=p->sum/4;
		p=p->next;
	}
	printf("Alter:\n");
	printf("%-15s%-20s",t[0],t[1]);
	for(i=0;i<4;i++)
	printf("%-10s",sub[i]);
	printf("\n");
	printlist(head);
	printf("SumAndAvg:\n");
	printf("%-15s%-20s%-10s%-10s\n",t[0],t[1],t[2],t[3]);
	p=head;
	int len=0;
	while(p)
	{
		printf("%-15s%-20s%-10.2f%-10.2f\n",p->num,p->name,p->sum,p->avg);
		p=p->next;
		len++;
	}
	printf("\n");
	sort1(head,len);
	printf("Sort:\n");
	printf("%-15s%-20s%-10s\n",t[0],t[1],t[3]);
	p=head;
	while(p)
	{
		printf("%-15s%-20s%-10.2f\n",p->num,p->name,p->avg);
		p=p->next;
	}
}
