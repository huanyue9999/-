#include <iostream>
#include <string.h>
#include <fstream>
#include <algorithm>
using namespace std;

int sizer;
typedef struct 
{
	int data;
	int t;
	int first;
}Node;

typedef struct 
{
	string name;		//�ص����� 
	int a[101];   //�ص����� 

}Position;

void initdata(Position *P)	//���ļ�����ѧУ���ص�����Ϣ
{
	ifstream f1("a.in");
	int i=1,j;
	
	f1>>sizer;
	for(i=1;i<=sizer;i++)
	f1>>P[i].name;
	

	
	for(i=1;i<=sizer;i++)
	{
		for(j=1;j<=sizer;j++)
		{
			f1>>P[i].a[j];
		}
	}
}
void savedata(Position *P)	//������Ϣ
{
	string b;
	int i,j;
	ofstream fout("a.in");
	fout<<sizer<<endl;
	for(i=1;i<=sizer;i++)
	{
		if(i==0)
		fout<<endl;
		
		fout<<P[i].name<<' ';
	}
	fout<<endl;
	for(i=1;i<=sizer;i++)
	{
		for(j=1;j<=sizer;j++)
		{
			fout<<P[i].a[j]<<' ';
			
		}
		fout<<endl; 
	}
	fout.close();
}

//���潨�����˵�����
int Menu()
{
 int command;
 cout<<"��������������������������������������������������������������������������������"<<endl;
 cout<<"��������������������������������������������������������������������������������"<<endl;
 cout<<"||                                                                          ||"<<endl;
 cout<<"||                                                                           ||"<<endl;
 cout<<"||              .............................................               ||"<<endl;
 cout<<"||             ...............................................               ||"<<endl;
 cout<<"||                                                                          ||"<<endl;
 cout<<"||           ..       ��ӭʹ�úӱ���ѧ��һ·У��У԰����ϵͳ    ..         ||"<<endl;
 cout<<"||                                                                          ||"<<endl;
 cout<<"||             ...............................................               ||"<<endl;
 cout<<"||              .............................................               ||"<<endl;
 cout<<"||                                                                           ||"<<endl;
 cout<<"||             ��ѡ������¼ϵͳ�����:����ʾ����ʼ�˺������Ϊ0��           ||"<<endl;
 cout<<"||                                                                           ||"<<endl;
 cout<<"||                           0 �� �� ϵͳ                                   ||"<<endl;
 cout<<"||                                                                           ||"<<endl;
 cout<<"||                           1 �� �� Ա ϵͳ                                ||"<<endl;
 cout<<"||                                                                           ||"<<endl;
 cout<<"||                           2 �� ͨ �� �� ϵͳ                             ||"<<endl;
 cout<<"||                                                                           ||"<<endl;
 cout<<"��������������������������������������������������������������������������������"<<endl;
 cout<<"��������������������������������������������������������������������������������"<<endl;
 cout<<"��ѡ����Ҫ���еĲ���..."<<endl;
 while(cin>>command,command<0||command>2)
 {
  cout<<"   ������󣡣���"<<endl;
  cout<<"   ���������룺";  
 }
 return command;
}



int display_1()//����Ա����
{
    int command;
   cout<<"��������������������������������������������������������������������������������"<<endl;
   cout<<"��������������������������������������������������������������������������������"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"||              .............................................               ||"<<endl;
   cout<<"||             ...............................................               ||"<<endl;
   cout<<"||                                                                          ||"<<endl;
   cout<<"||             ..           ��ӭʹ��У԰����ϵͳ          ..                 ||"<<endl;
   cout<<"||                                                                          ||"<<endl;
   cout<<"||             ...............................................               ||"<<endl;
   cout<<"||              .............................................               ||"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"||                   ����Աϵͳ˵������ϵͳ��ʵ�����¹���:                  ||"<<endl;
   cout<<"||                          0 ��  ��  �� �� ��                               ||"<<endl;
   cout<<"||                          1 ����λ�������Ϣ                             ||"<<endl;
   cout<<"||                          2 ¼  ��  · �� (�ѳ�ʼ�����ɰ�a.txt�ļ�¼��)    ||"<<endl;
   cout<<"||                          3 ��  ��  · ��                                 ||"<<endl;
   cout<<"||                          4 ɾ  ��  · ��                                  ||"<<endl;
   cout<<"||                          5 ��  ��  · ��                                 ||"<<endl;
   cout<<"||                          6 ��  ʾ  · ��                                  ||"<<endl;
   cout<<"||                          7 �� ѯ �� �� �� �� �� ·��                     ||"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"��������������������������������������������������������������������������������"<<endl;
   cout<<"��������������������������������������������������������������������������������"<<endl;
   cout<<"��ѡ����Ҫ���еĲ���..."<<endl;
   while(cin>>command,command<0||command>7)
 	{
 		cout<<"   ������󣡣���"<<endl;
 		cout<<"   ���������룺";
 	}
 	return command;
}

int display_2()//��ͨ�û�����
{
 int command;
   cout<<"��������������������������������������������������������������������������������"<<endl;
   cout<<"��������������������������������������������������������������������������������"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"||              .............................................               ||"<<endl;
   cout<<"||             ...............................................               ||"<<endl;
   cout<<"||                                                                          ||"<<endl;
   cout<<"||             ..           ��ӭʹ��У԰����ϵͳ          ..                 ||"<<endl;
   cout<<"||                                                                          ||"<<endl;
   cout<<"||             ...............................................               ||"<<endl;
   cout<<"||              .............................................               ||"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"||                 ��ͨ�û�ϵͳ˵����������ʵ�����¹���:                    ||"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"||                           0 �� �� �� �˵�                               ||"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"||                           1 ����λ�������Ϣ                             ||"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"||                           2 �� �� �� �� ·��                            ||"<<endl;
   cout<<"||                                                                           ||"<<endl;
   cout<<"��������������������������������������������������������������������������������"<<endl;
   cout<<"��������������������������������������������������������������������������������"<<endl;
   cout<<"��ѡ����Ҫ���еĲ���..."<<endl;
 	while(cin>>command,command<0||command>2)
 	{
 		cout<<"   ������󣡣���"<<endl;
 		cout<<"   ���������룺";
	}
	return command;
}

void look_up_the_map(Position *P)       //////���ƽ��ͼ
{
	int i,j;
	initdata(P);
	if(sizer==0)
	{
		cout<<endl;
		cout<<" ��ʱ��û��¼����Ϣ���밴�س������أ�"<<endl;
		getchar();
		getchar();
	
	}
	
	else
	{
		cout<<"��ǰ�ӱ���ѧ��һ·У��¼��ص�������"<<sizer<<" ��"<<endl;
	
		cout<<endl;
		cout<<"�ص��飺" <<endl;

		for(int i=1;i<=sizer;i++) 
		{
			cout<<i<<"��"<<P[i].name<<endl;
		}
		
				int com;
				int i;
				string s1; 
		cout<<"��ѡ����Ҫ�鿴λ����Ϣ����ţ�"<<endl; 
		cin>>i;
		s1 = P[i].name;
		cout<<endl<<endl; 
		if(!s1.compare("�������")) 
		cout<<"      *****�������Ϊ�ӱ���ѧѧУʦ���ṩ�������"<<endl;
		else if(!s1.compare("�ٳ�"))
		cout<<"      *****�ٳ���ȫУʦ��������������Ҫ����"<<endl;
		
		else if(!s1.compare("����������"))
		cout<<"         *****��������������У���ͻ�ĳ���"<<endl;
    	else if(!s1.compare("����ѧԺ"))
    	cout<<"          *****����ռ䰲ȫ������ѧԺ"<<endl;
    	else if(!s1.compare("��Ϣѧ��"))
    	cout<<"       *****��Ϣѧ��Ϊѧ���ṩ����ʵ������"<<endl;
        else if(!s1.compare("ͼ���"))
        cout<<"            *****ͼ������еĴ����ḻ�Ĳ���"<<endl;
        else if(!s1.compare("��԰����"))
        cout<<"           *****��԰����Ϊ������һ����ɫ"<<endl;
        else if(!s1.compare("У���Ͽ�"))
        cout<<"             *****�ӱ���ѧ��һ·У��У���Ͽ�"<<endl;
        else if(!s1.compare("У�ű���"))
        cout<<"              *****�ӱ���ѧ��һ·У��У�ű���"<<endl;
        else if(!s1.compare("У�Ŷ���"))
        cout<<"               *****�ӱ���ѧ��һ·У��У�Ŷ���"<<endl;
        else if(!s1.compare("����"))
        cout<<"     *****����ÿ��Ϊѧ���ṩ���ʵķ���"<<endl;
        else if(!s1.compare("���Ӿ���"))
        cout<<"     *****��������Ӿ��۷ǳ�Ư��"<<endl;

        else
        cout<<"��δ���������Ϣ"<<endl;
        
		if(i>0&&i<=sizer)
		{
			cout<<endl<<endl;
		
			cout<<"��"<<P[i].name<<"ֱ�����ڵ��У�" ;
			for(j=1;j<=sizer;j++)
			{
				if(P[i].a[j]!=0) 
				cout<<P[j].name<<' ';
				
			}
			cout<<endl<<endl;
		}
		
	}
	cout<<" �� �� �� �� �� �� �� �� �� �� ����";
    getchar();getchar();
}
void fill_the_data(Position *P)        /////////����¼��·��
{
	int k,i,j;
	cout<<"������ô�¼��ص��������";
	cin>>k;
	
	sizer = k;
	for(i=1;i<=k;i++)
	{
		cout<<" ��¼���"<<i<<"���ص�����";
		cin>>P[i].name;
		cout<<endl;
		 
	}
	cout<<"�����ڽӾ������ʽ����ص�����֮��ľ��룬��i�е�j�д���i�ص���j�ص�֮��ľ���:"<<endl;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			cin>>P[i].a[j];
		}
	}
	savedata(P);
	cout<<"        ¼ �� �� ��������"<<endl;
 	cout<<" �� �� �� �� �� �� �� �� �� �� ����";
	getchar();getchar();
}


void add_the_data(Position *P)         ////////��Ӻ���
{
	int i;
	initdata(P);
	if(sizer == 0)
	{
		cout<<endl;
		cout<<" ��ʱ��û��¼����Ϣ���밴�س������أ�"<<endl;
		getchar();getchar();
	}
	else
	{
		cout<<"����������Ҫ���ӵĵص�����";
		cin>>P[sizer+1].name;
		cout<<"�밴˳������õص��������ص�֮��ľ���"<<endl; 
		
		for(i= 1;i<=sizer;i++)
		{
			cout<<"������õ㵽"<<P[i].name<<"�ľ��룺";
			cin>>P[sizer+1].a[i];
			P[i].a[sizer+1] = P[sizer+1].a[i];
		}
		sizer++;
		P[i].a[sizer] = 0;
		savedata(P);
		cout<<"        �� �� �� ��������"<<endl;
	}
	cout<<" �� �� �� �� �� �� �� �� �� �� ����" ;
	getchar();
	getchar();
}
void delete_the_data(Position *P)   ////////////ɾ������
{
	string name;
	int i,j,k;
	initdata(P);
	if(sizer==0)
	{
		cout<<endl;
		cout<<" ��ʱ��û��¼����Ϣ���밴�س������أ�"<<endl;
		getchar();
		getchar();
	
	}
	else
	{
		cout<<"��������Ҫɾ���ĵص����֣�";
		cin>>name;
		for(i=1;i<=sizer;i++)
		{
			if(P[i].name == name)
			break;
		}
		if(i>sizer)
		cout<<"    �� �� �� �󣬸� ѧ У �� ͼ �� Ϣ �� û �� �� �� �㣡";
		
		else
		{
			for(j=i;j<sizer;j++)
			{
				P[j] = P[j+1];
				
			}
			sizer--;
			for(k=1;k<=sizer;k++)
			{
				for(j=i;j<=sizer;j++)
				{
					P[k].a[j] = P[k].a[j+1];
				}
				
				
			}
			savedata(P);
			
			cout<<"        ɾ �� �� ��������"<<endl;
		}
	}
	cout<<" �� �� �� �� �� �� �� �� �� �� ����";
	getchar();getchar();
}

void change_the_data(Position *P)           //////�޸ĺ���
{
	string name;
	int i,j,command;
	initdata(P);
	if(sizer==0)
	{
		cout<<endl;
		cout<<" ��ʱ��û��¼����Ϣ���밴�س������أ�"<<endl;
		getchar();
		getchar();
	
	}
	
	else
	{
				cout<<"     1.�޸�ĳ�㵽������������"<<endl<<endl;
		cout<<"     2.�޸ĵص���"<<endl<<endl;
		cout<<"��ѡ����Ҫ�޸ĵĶ������ţ�"; 
		cin>>command;
		 

		
		while(command<1||command>2)
		{
			cout<<"������󣡣���"<<endl;
			cout<<"���������룺";
			cin>>command;
		}
		
		if(command==1)
		{
			cout<<"��������Ҫ�޸�·���ĵص����֣�";
			cin>>name;
			
			cout<<endl;
			
			for(i=1;i<=sizer;i++)
			{
				if(P[i].name==name)
				break;
			}
			if(i>sizer)
			cout<<"    �� �� �� �󣬸� ѧ У �� ͼ �� Ϣ �� û �� �� �� �㣡";
			
			else
			{
				cout<<"����������õ㵽������֮��ľ��룺";
				
				for(j=1;j<=sizer;j++)
				{
					cout<<name<<"��"<<P[j].name<<"���¾��룺";
					cin>>P[i].a[j];
					P[j].a[i] = P[i].a[j];
				}
				savedata(P);
				cout<<"        �� �� �� ��������"<<endl;
			}
		}
		else
		{
	 		cout<<"��������Ҫ�޸ĵĵص�����";
			cin>>name;
				
			cout<<endl;
			for(i=1;i<=sizer;i++)
			{
				if(P[i].name==name)
				break;
			
			}
			if(i>sizer)
			cout<<"    �� �� �� �󣬸� ѧ У �� ͼ �� Ϣ �� û �� �� �� �㣡";
					
			else
			{
				cout<<"����������õص����֣�";
				cin>>P[i].name;
				savedata(P);
				cout<<"        �� �� �� ��������"<<endl;
			}
		}
	}
	
	cout<<" �� �� �� �� �� �� �� �� �� �� ����";
 	getchar();
	getchar();
}
void print_the_data(Position *P)           ///////��ʾУ԰���ص���Ϣ
{
	int i,j;
	initdata(P);
	if(sizer==0)
	{
		cout<<endl;
		cout<<" ��ʱ��û��¼����Ϣ���밴�س������أ�"<<endl;
		getchar();
		getchar();
	
	}
	
	else
	{
		cout<<"��¼��ص�������"<<sizer<<" ��"<<endl;
		cout<<"���еص������£�";
		
		for(i=1;i<=sizer;i++)
		{
			if(i==0)
			cout<<endl;
			
			cout<<P[i].name<<' ';
		}
		cout<<endl;
		for(i=1;i<=sizer;i++)
		{
			for(j=1;j<=sizer;j++)
			{
				cout<<P[i].a[j]<<' ';
				
			}
			cout<<endl;
		}
	}
	cout<<" �� �� �� �� �� �� �� �� �� �� ����";
    getchar();getchar();
}

void f(int n,int i,Position *P,Node *c)      ////�ݹ�������·��
{
	if(i==n)
	{
		cout<<P[i].name<<" ";
		return ;
		
	}
	
	f(n,c[i].first,P,c);
	cout<<P[i].name<<" ";
}

int fun(Node c[])                   //////Ѱ����Сֵ
{
	int min=9999,i,k=-1;
	for(i=1;i<sizer;i++)
	{
		if(c[i].t==1&&c[i].data<min)
		{
			min=c[i].data;
			k=i;
		}
		
	}
	return k;
}
void compute_distance(Position *P)   ///////�����·��
{
	initdata(P);
	string name1,name2;
	
	int i,j,n,max=9999,k;
	Node c[101];
	for(i=1;i<=sizer;i++)
	{
		c[i].data = max;
		c[i].t = 1;
		
	}
	
	cout<<"��������Ҫ��ѯ����ʼλ�ã�";
	cin>>name1;
	cout<<"��������Ҫ��ѯ���յ�λ�ã�";
	cin>>name2;
	
	for(i=1;i<=sizer;i++)
	{
		if(P[i].name == name1)
		{
			n=i;
			c[i].t=  0;
			c[i].first = n;
			break;
			
		}
	}
	
	if(i>sizer)
	cout<<"    �� �� �� �󣬸� ѧ У �� ͼ �� Ϣ �� û �� �� �� �㣡";
	
	else
	{
		for(j=1;j<=sizer;j++)
		{
			if(P[i].a[j]!=0)
			{
				c[j].data = P[i].a[j];
				c[j].first = i;
			}
		}
		
		int pp=0;
		while(1)
		{
			k=fun(c);
			if(k==-1)
			break;
			
			c[k].t = 0;
			for(i=1;i<=sizer;i++)
			{
				if(P[k].a[i]!=0&&(P[k].a[i]+c[k].data<c[i].data))
				{
					c[i].data = P[k].a[i]+c[k].data;
					c[i].first = k;
				}
			}
		}
		
		for(i=1;i<=sizer;i++)
		{
			if(P[i].name == name2)
			{
				cout<<name1<<"��"<<name2<<"���·�����ξ����ĵص�Ϊ: ";
				f(n,i,P,c);
				
				cout<<endl;
				cout<<"·������λ��";
				if(c[i].data == 9999)
				cout<<'0'<<endl;
				
				else
				cout<<c[i].data<<endl;
				break; 
			}
		}
		
	}
	cout<<" �� �� �� �� �� �� �� �� �� �� ����";
    getchar();getchar();
		
}
int main()
{
    int command,t1,t2;
    string zh,mm;
    Position *P=new Position[101];
   // system("color 2b");
    while(1)
    {
        command=Menu();
 		if(command==1)
  		{
  			 while(1)
  			{
   				cout<<"�������˺ţ�"<<endl;cin>>zh;
 				cout<<"���������룺"<<endl;cin>>mm;
    			if(zh=="0"&&mm=="0") break;
   				 else cout<<"�˺Ż������������������..."<<endl;
   			}
   		system("cls");
  		t1=0;
  		while(t1==0)
 		{
   			command=display_1();
   			switch(command)
 			{
  				case 0:t1=1;break;
    			case 1:look_up_the_map(P);system("cls");break;
  				case 2:fill_the_data(P);system("cls");break;
   				case 3:add_the_data(P);system("cls");break;
   				case 4:delete_the_data(P);system("cls");break;
   				case 5:change_the_data(P);system("cls");break;
    			case 6:print_the_data(P);system("cls");break;
    			case 7:compute_distance(P);system("cls");break;
  	 		}	
  		}
   
 		}
  		else if(command==2)
  		{
  			 while(1)
  			 {
   			 cout<<"�������˺ţ�"<<endl;cin>>zh;
   			 cout<<"���������룺"<<endl;cin>>mm;
    		if(zh=="0"&&mm=="0") break;
   			 else cout<<"�˺Ż������������������..."<<endl;
   			}
           system("cls");
   			t2=0;
   			
   			while(t2==0)
  			 {
  		 		command=display_2();
  			  	switch(command)
   				{
   				case 0:t2=1;break;
    			case 1:look_up_the_map(P);system("cls");break;
   				case 2:compute_distance(P);system("cls");break;
 				}
  			 }
   
  		}
  		
    else break;
	}
}









