#include <IOSTREAM>
#include<conio.h> 
#include<string.h>
#include<stdio.h>
using namespace std;

void fuli();
double lixi(double double_inv,int year);
void danli();
void benjin();
int main()
{int choice;
char choice2;
end1:system("CLS");
printf("\n\n\n\n                       ��ӭʹ����Ϣ����ϵͳ��\n\n");
printf("                         �������ʲô\n");
printf("                           1.����\n");
printf(" 	                   2.����\n");
printf(" 	         	   3.һ��������豾�𣨸�����\n");
printf(" 		          4.�˳�\n");


scanf("%d",&choice);

switch(choice)
{case 1:system("CLS");danli();break;
 case 2:system("CLS");fuli();break;
 case 3:system("CLS");benjin();break;
 case 4:exit(0);
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