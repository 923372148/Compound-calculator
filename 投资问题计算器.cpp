#include <IOSTREAM>
#include<conio.h> 
#include<string.h>
#include<stdio.h>
using namespace std;

void fuli();
double lixi(double double_inv,int year);
void danli();
void benjin();
void time();
void reward();
int main()
{int choice;
char choice2;
end1:system("CLS");
printf("\n\n\n\n                       ��ӭʹ��Ͷ������Ƽ���ϵͳ��\n\n");
printf("                         �������ʲô\n");
printf("                           1.����\n");
printf(" 	                   2.����\n");
printf(" 	         	   3.һ��������豾�𣨸�����\n");
printf("                           4.���ݱ��𡢱������������Ͷ��ʱ�䣨�꣩����Ʊ��\n");
printf("                           5.���Ʊ������\n");
printf(" 		          6.�˳�\n");


scanf("%d",&choice);

switch(choice)
{case 1:system("CLS");danli();break;
 case 2:system("CLS");fuli();break;
 case 3:system("CLS");benjin();break;
 case 4:system("CLS");time();break;
 case 5:system("CLS");reward();break;
 case 6:exit(0);
}
printf("\n\n              �����������ô(  Y  |  N   )\n");
getchar();
scanf("%c",&choice2);
if(choice2==89||choice2==121){
	goto end1;}
else exit(0);

}
void danli()
{ 
double invest;     //Ͷ�ʽ��
int year=3;

printf("������Ͷ�ʽ��\n");
cin>>invest;
cout<<endl;
printf("�������������\n");
scanf("%d",&year);
 double inv;    //������Ϣ
cout<<"���뵥����Ϣ";
cin>>inv;

double sum1=0;   //����
sum1=invest*inv*(double)year+invest;
printf("�������Ϊ\n");
printf("%lf",sum1);


}
void fuli(){
double lixi2; 
double invest;     //Ͷ�ʽ��
int year=3;

printf("������Ͷ�ʽ��\n");
cin>>invest;
cout<<endl;
printf("�������������\n");
scanf("%d",&year);
double double_inv;    //������Ϣ
cout<<"���븴����Ϣ";
cin>>double_inv;

double sum2 =0;   //����

lixi2=lixi(double_inv,year);

sum2=lixi2*invest;
      printf("%4lf\n",lixi2);
      printf("����Ϊ%lf",sum2);


}

double lixi(double double_inv,int year)
{
	
	int i=0;
double x=1.0;

while(i<year)
{
 i++;
x=(1.0+double_inv)*x;     //���㸴��Ͷ�ʵ���Ϣ
	
}	printf("%4lf\n",x);
	return x;

}
void benjin()
{double lixi2; double double_inv;  
double money;     //Ͷ�ʽ��
double sum;
int year=3;
	printf("�������������\n");
scanf("%d",&year);
cout<<"���븴����Ϣ";
cin>>double_inv;
printf("\n����������õ��Ľ��\n");
scanf("%lf",&money);
lixi2=lixi(double_inv,year);
sum=money/lixi2;
printf("����Ҫ����\n%lf\n",sum);


}
void time()
{double reward; 
double invest;  //����
double money;     //��õ��Ľ��
double year=3;
double sum;
double x;
int j;
	printf("�����뱾��\n");
scanf("%lf",&invest);
cout<<"�����Ʊ������";
cin>>reward;
printf("\n����������õ��Ľ��\n");
scanf("%lf",&money);
sum=(money-invest)/invest+1.0;
x=1.0;
for(int i=1;x<sum;i++)
{
x=(1+reward)*x;
j=i;
}




printf("��Ҫʱ��Ϊ%d��\n",j);
}
void reward()
{
double reward; 
double invest;  //����
double money;     //��õ��Ľ��
double year=3;
double sum;
double x;
int j;
	printf("�����뱾��\n");
scanf("%lf",&invest);
cout<<"���������� ";
cin>>year;
printf("\n����������õ��Ľ��\n");
scanf("%lf",&money);
sum=money/invest;
x=1.0;
for(double i=0.01;x<sum;i=i+0.01)
{
x=(1+i)*x;

j=i*100;
}
printf("��Ҫ������Ϊ�ٷ�֮%d\n",j);

}



