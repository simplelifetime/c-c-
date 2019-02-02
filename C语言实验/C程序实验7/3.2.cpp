#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s_list{       //每个学生的数据 
	char num[20],name[25];
	float gra[4],sum,avg;
	struct s_list *next;;
};
struct fc{           //用于储存需要更改的数据 
	char a1[25],a2[25];
	float q;
}s1[20];
int n;
void creat_list(struct s_list **headp,int n)    //循环建立链表 
{
	int i,j;	struct s_list *loc_head=NULL,*tail=NULL;
	loc_head=(struct s_list*)malloc(sizeof(struct s_list));
	tail=loc_head;
	scanf("%s %s %f %f %f %f",tail->num,tail->name,&tail->gra[0],&tail->gra[1],&tail->gra[2],&tail->gra[3]);
	tail->sum=tail->gra[0]+tail->gra[1]+tail->gra[2]+tail->gra[3];
    tail->avg=tail->sum/4;
	for(i=1;i<n;i++)
	{
		tail->next=(struct s_list*)malloc(sizeof(struct s_list));
		tail=tail->next;
		scanf("%s %s %f %f %f %f",tail->num,tail->name,&tail->gra[0],&tail->gra[1],&tail->gra[2],&tail->gra[3]);
		tail->sum=tail->gra[0]+tail->gra[1]+tail->gra[2]+tail->gra[3];
		tail->avg=tail->sum/4;
	}
	tail->next=NULL;	*headp=loc_head;
}
void swap(struct s_list *a,struct s_list *b)    //在不交换指针的情况下交换结构体函数 
{
	struct s_list c,*p;
	c=*a;	*a=*b;	*b=c;
	p=a->next;	a->next=b->next;	b->next=p;
 } 
void printlist(struct s_list *head)     //打印成绩 
{
	struct s_list *p=head;
	while(p)
	{	printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->num,p->name,p->gra[0],p->gra[1],p->gra[2],p->gra[3]);
		p=p->next;	}
	printf("\n");
}
void sort(struct s_list **head)
{
	struct s_list *p1,*prior1,*p2,*prior2,*t;
	p2=*head;
	for(p1=(*head)->next,prior1=*head;p1!=NULL;prior1=p1,p1=p1->next)
	{
		if(p2->avg>p1->avg)
		{
			prior1->next=p2;
			t=p2->next;	p2->next=p1->next;	p1->next=t;
			p2=p1;		*head=p1;
		}	}
	for(prior1=*head,p1=prior1->next;p1->next!=NULL;prior1=p1,p1=p1->next)
	{
		for(prior2=p1,p2=prior2->next;p2!=NULL;prior2=p2,p2=p2->next)
		{
			if(p1->avg>p2->avg)
			{
				prior1->next=p2; prior2->next=p1; t=p1->next;
				p1->next=p2->next;  p2->next=t;   p1=p2;  p2=prior2;
	}  }  }  }
void sort1(struct s_list *head,int len)
{
	int i,j;
	struct s_list *p=head;
	for(i=len;i>0;i--)
	{
		p=head;
		for(j=0;j<i-1;j++)
		{	if(p->avg>p->next->avg)
					swap(p,p->next);
			p=p->next;		}
	}
}

int main()
{
	char sub[4][10]={"English","Math","Physics","C"};
	struct s_list *p,*head;
	int n,i,j,m,len=0;
	scanf("%d",&n);
	creat_list(&head,n);
	p=head;
	printf("%-15s%-20s","ID","Name");
	printf("%-10s%-10s%-10s%-10s\n","English","Math","Physics","C");
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
		p->sum=p->gra[0]+p->gra[1]+p->gra[2]+p->gra[3];  p->avg=p->sum/4;	p=p->next;
	}
	printf("%-10s%-10s%-10s%-10s\n","English","Math","Physics","C");
	printlist(head);
	printf("%-15s%-20s%-10s%-10s\n","ID","Name","SUM","AVG");   
	p=head;
	while(p)
	{	printf("%-15s%-20s%-10.2f%-10.2f\n",p->num,p->name,p->sum,p->avg);
		p=p->next;
		len++;      }
	sort1(head,len);
//	sort(&head);
	printf("\n%-15s%-20s%-10s\n","ID","Name","AVG");
	p=head; 	while(p)
	{	printf("%-15s%-20s%-10.2f\n",p->num,p->name,p->avg);
		p=p->next;	}
}
























