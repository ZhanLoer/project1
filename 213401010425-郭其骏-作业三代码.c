#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class Student
{
private:
   char sport[20];
   char name[20];
   int xy;
   int score;
   char sex[10];
public:
	void fun(int Xy,char* Sport,char* Name,char* Sex,int Score)
	{
		xy=Xy;
	    strcpy(sport,Sport);
	    strcpy(name,Name);
	    strcpy(sex,Sex);
		score=Score;
	}
int getxy()
	{
	   return xy;
	}
char* getname()
    {
	return name;
    }
char* getsex()
   {
    return sex;
   }
int getscore()
   {
	return score;
   }
char* getsport()
   {
	   return sport;
   }
};
int main()
{
    cout<<"大学生运动会成绩管理系统"<<endl;
	cout << "1.增加某个学生成绩" << endl;
	cout << "2.删除某个学生成绩" << endl;
	cout << "3.显示某个学生成绩" << endl;
	cout << "4.按各院系编号输出总分" << endl;
	cout << "5.按各院系总分排序" << endl;
	cout << "6.按各院系男团体总分排序" << endl;
	cout << "7.按各院系女团体总分排序" << endl;
	cout << "8.退出成绩管理系统" << endl;
	int n=0;
	int xy=0;
	char sport[20]={0};
	char name[20]={0};
	char sex[20]={0};
	int score=0;
	Student f[200];
	int i=0;
	cout<<"请输入院系个数:"<<endl;
	int x;
	cin>>x;
	cout<<"请输入总项目数:"<<endl;
	int len;
	cin>>len;
	len=len*3;/*每个项目会有第一名第二名第三名*/
	cout<<"请按照以下顺序分别输入各项目获奖前三名信息:"<<endl;
	cout<<"院系编号: 比赛项目: 姓名: 性别: 得分:"<<endl;
	for(i=0;i<len;i++)
	{
	   cin>>xy>>sport>>name>>sex>>score;
	   f[i].fun(xy,sport,name,sex,score);
	}
	int all[20]={0};
	while(1)
	{
	   cout<< "请选择你想实现的功能："<<endl;
	   cin>>n;
	  
	   
	   if(n==1)
	{
	   char name1[20];
	   int j=0;
	   cout<<"想要增加的获奖人员数量:"<<endl;
	   cin>>j;
	   cout<<"输入你想增加的信息:"<<endl;
	   for(i=len;i<len+j;i++)
	   {
	    cin>>xy>>sport>>name>>sex>>score;
		f[i].fun(xy,sport,name,sex,score);
	   }
	   int l=i;
	   len=l;
	   cout<<"增加成功,当前获奖人员总信息为:"<<endl;
	   for(i=0;i<l;i++)
	   {
	      cout<<f[i].getxy()<<" "<<f[i].getsport()<<" "<<f[i].getname()<<" "<<f[i].getsex()<<" "<<f[i].getscore()<<" "<<endl;
	   }
	}
	   
	   
	   if(n==2)
	{
	   int j=0;
	   char name1[20];
	   cout << "输入你想删除的学生成绩的名字:";
		cin >> name1;
		cout << "输出删除后的数据：" << endl;
		for (i = 0;i < len;i++)
		{
			if(strcmp(name1,f[i].getname())==0)
			{
				for (j = i;j < len;j++)
				{
                      f[j] = f[j + 1];
				}	
			}
		}
		len--;
	  for(i=0;i<len;i++)
	   {
	      cout<<f[i].getxy()<<" "<<f[i].getsport()<<" "<<f[i].getname()<<" "<<f[i].getsex()<<" "<<f[i].getscore()<<" "<<endl;
	   }
	}

	   if(n==3)
	{
	  cout<<"请输入学生姓名:"<<endl;
	  char NAME[20];
	  cin>>NAME;
	  for(i=0;i<len;i++)
	  {
	     if(strcmp(NAME,f[i].getname())==0)
	     {
	      cout<<f[i].getxy()<<" "<<f[i].getsport()<<" "<<f[i].getname()<<" "<<f[i].getsex()<<" "<<f[i].getscore()<<" "<<endl;
	   }
	  }
	}

	   
	   
	   if(n==4)
    {
		int all[20]={0};
	   	for(int i=0;i<x;i++)
		{
		    for(int j=0;j<len;j++)
			{
			   if(f[j].getxy()==i+1)
			   {
				   all[i+1]=all[i+1]+f[j].getscore();
			   }
			}
		}
		 cout<<"学院编号   成绩"<<endl;
		for(int i=1;i<=x;i++)
		{
		  cout<<i<<"          "<<all[i]<<endl;
		}
	}
	     
	   
	   if(n==5)
    {
		int all[20]={0};
	   	for(int i=0;i<x;i++)
		{
		    for(int j=0;j<len;j++)
			{
			   if(f[j].getxy()==i+1)
			   {
				   all[i+1]=all[i+1]+f[j].getscore();/*角标为院系编号*/
			   }
			}
		}
		int XY[20];/*成绩排序的同时记录院系编号变化*/
		for(int i=1;i<=x;i++)
		{
		   XY[i]=i;
		}
		int k=0;/*排序需要*/
		for(int i=1;i<=x;i++)
		{
		   for(int j=i+1;j<=x;j++)
		   {
		       if(all[i]<all[j])
			   {
				   k=all[i];
			       all[i]=all[j];
			       all[j]=k;
				   k=XY[i];
				   XY[i]=XY[j];
				   XY[j]=k;
			   }
		   }
		}
		 cout<<"学院编号   总成绩排序"<<endl;
		for(int i=1;i<=x;i++)
		{
		  cout<<XY[i]<<"          "<<all[i]<<endl;
		}
	}
        

	   if(n==6)
   {
	   int all[20]={0};
	   	for(int i=0;i<x;i++)
		{
		    for(int j=0;j<len;j++)
			{
			   if(f[j].getxy()==i+1&&strcmp("男",f[j].getsex())==0)
			   {all[i+1]=all[i+1]+f[j].getscore(); }
			}
		}
	   int XY[20];/*成绩排序的同时记录院系编号变化*/
		for(int i=1;i<=x;i++)
		{
		   XY[i]=i;
		}
		int k=0;/*排序需要*/
		for(int i=1;i<=x;i++)
		{
		   for(int j=i+1;j<=x;j++)
		   {
		       if(all[i]<all[j])
			   {
				   k=all[i];
			       all[i]=all[j];
			       all[j]=k;
				   k=XY[i];
				   XY[i]=XY[j];
				   XY[j]=k;
			   }
		   }
		}
		 cout<<"学院编号   男生成绩排序"<<endl;
		for(int i=1;i<=x;i++)
		{
		  cout<<XY[i]<<"          "<<all[i]<<endl;
		}
   }

	   if(n==7)
   {
	   	for(int i=0;i<x;i++)
		{
		    for(int j=0;j<len;j++)
			{
			   if(f[j].getxy()==i+1&&strcmp("女",f[j].getsex())==0)
			   {
				   all[i+1]=all[i+1]+f[j].getscore();
			   }
			}
		}
	   int XY[20];/*成绩排序的同时记录院系编号变化*/
		for(int i=1;i<=x;i++)
		{
		   XY[i]=i;
		}
		int k=0;/*排序需要*/
		for(int i=1;i<=x;i++)
		{
		   for(int j=i+1;j<=x;j++)
		   {
		       if(all[i]<all[j])
			   {
				   k=all[i];
			       all[i]=all[j];
			       all[j]=k;
				   k=XY[i];
				   XY[i]=XY[j];
				   XY[j]=k;
			   }
		   }
		}
		 cout<<"学院编号   女生成绩排序"<<endl;
		for(int i=1;i<=x;i++)
		{
		  cout<<XY[i]<<"     "<<all[i]<<endl;
		}
   }
	   if(n==8)
	{break;}
  }
  return 0;
}