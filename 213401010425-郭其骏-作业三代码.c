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
    cout<<"��ѧ���˶���ɼ�����ϵͳ"<<endl;
	cout << "1.����ĳ��ѧ���ɼ�" << endl;
	cout << "2.ɾ��ĳ��ѧ���ɼ�" << endl;
	cout << "3.��ʾĳ��ѧ���ɼ�" << endl;
	cout << "4.����Ժϵ�������ܷ�" << endl;
	cout << "5.����Ժϵ�ܷ�����" << endl;
	cout << "6.����Ժϵ�������ܷ�����" << endl;
	cout << "7.����ԺϵŮ�����ܷ�����" << endl;
	cout << "8.�˳��ɼ�����ϵͳ" << endl;
	int n=0;
	int xy=0;
	char sport[20]={0};
	char name[20]={0};
	char sex[20]={0};
	int score=0;
	Student f[200];
	int i=0;
	cout<<"������Ժϵ����:"<<endl;
	int x;
	cin>>x;
	cout<<"����������Ŀ��:"<<endl;
	int len;
	cin>>len;
	len=len*3;/*ÿ����Ŀ���е�һ���ڶ���������*/
	cout<<"�밴������˳��ֱ��������Ŀ��ǰ������Ϣ:"<<endl;
	cout<<"Ժϵ���: ������Ŀ: ����: �Ա�: �÷�:"<<endl;
	for(i=0;i<len;i++)
	{
	   cin>>xy>>sport>>name>>sex>>score;
	   f[i].fun(xy,sport,name,sex,score);
	}
	int all[20]={0};
	while(1)
	{
	   cout<< "��ѡ������ʵ�ֵĹ��ܣ�"<<endl;
	   cin>>n;
	  
	   
	   if(n==1)
	{
	   char name1[20];
	   int j=0;
	   cout<<"��Ҫ���ӵĻ���Ա����:"<<endl;
	   cin>>j;
	   cout<<"�����������ӵ���Ϣ:"<<endl;
	   for(i=len;i<len+j;i++)
	   {
	    cin>>xy>>sport>>name>>sex>>score;
		f[i].fun(xy,sport,name,sex,score);
	   }
	   int l=i;
	   len=l;
	   cout<<"���ӳɹ�,��ǰ����Ա����ϢΪ:"<<endl;
	   for(i=0;i<l;i++)
	   {
	      cout<<f[i].getxy()<<" "<<f[i].getsport()<<" "<<f[i].getname()<<" "<<f[i].getsex()<<" "<<f[i].getscore()<<" "<<endl;
	   }
	}
	   
	   
	   if(n==2)
	{
	   int j=0;
	   char name1[20];
	   cout << "��������ɾ����ѧ���ɼ�������:";
		cin >> name1;
		cout << "���ɾ��������ݣ�" << endl;
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
	  cout<<"������ѧ������:"<<endl;
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
		 cout<<"ѧԺ���   �ɼ�"<<endl;
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
				   all[i+1]=all[i+1]+f[j].getscore();/*�Ǳ�ΪԺϵ���*/
			   }
			}
		}
		int XY[20];/*�ɼ������ͬʱ��¼Ժϵ��ű仯*/
		for(int i=1;i<=x;i++)
		{
		   XY[i]=i;
		}
		int k=0;/*������Ҫ*/
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
		 cout<<"ѧԺ���   �ܳɼ�����"<<endl;
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
			   if(f[j].getxy()==i+1&&strcmp("��",f[j].getsex())==0)
			   {all[i+1]=all[i+1]+f[j].getscore(); }
			}
		}
	   int XY[20];/*�ɼ������ͬʱ��¼Ժϵ��ű仯*/
		for(int i=1;i<=x;i++)
		{
		   XY[i]=i;
		}
		int k=0;/*������Ҫ*/
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
		 cout<<"ѧԺ���   �����ɼ�����"<<endl;
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
			   if(f[j].getxy()==i+1&&strcmp("Ů",f[j].getsex())==0)
			   {
				   all[i+1]=all[i+1]+f[j].getscore();
			   }
			}
		}
	   int XY[20];/*�ɼ������ͬʱ��¼Ժϵ��ű仯*/
		for(int i=1;i<=x;i++)
		{
		   XY[i]=i;
		}
		int k=0;/*������Ҫ*/
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
		 cout<<"ѧԺ���   Ů���ɼ�����"<<endl;
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