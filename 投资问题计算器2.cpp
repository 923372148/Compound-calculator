#include <IOSTREAM>
#include<conio.h> 
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;

void fuli();//��������
double lixi(double double_inv,int year);//������Ϣ
void danli();//����
void benjin();//�󱾽�
void time();//��ʱ�亯��
void reward();//�󱨳���
void sum();//���ʲ���ֵ
void lend();//��Ϣ����
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
printf("                           6.��Ϣ��Ͷ�����ʲ���ֵ\n");
printf("                           7.��ÿ�µȶϢ����\n");

printf(" 		          8.�˳�\n");


scanf("%d",&choice);

switch(choice)
{case 1:system("CLS");danli();break;
 case 2:system("CLS");fuli();break;
 case 3:system("CLS");benjin();break;
 case 4:system("CLS");time();break;
 case 5:system("CLS");reward();break;
 case 6:system("CLS");sum();break;
	 case 7:system("CLS");lend();break;
 case 8:exit(0);
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

void sum()
{
double reward; 
double invest;//ÿ�궨Ͷ
int year=3;
double  sum;
double reward2,reward3;

	printf("������ÿ�궨Ͷ\n");
scanf("%lf",&invest);
cout<<"���������� ";
cin>>year;
cout<<"����ر�";
cin>>reward;
reward3=1.0+reward;
reward2=pow(reward3,year);
sum=invest*reward3*(reward2-1.0)/reward;
printf("���ʲ��ܶ�Ϊ%lf",sum);
}
void lend()
{double lilv; //������
double invest;//�����
int year=3;//����
double  sum;//�ȶ�Ӧ��
double lilv2,lilv3,lilv4;

	printf("����������\n");
scanf("%lf",&invest);
cout<<"���������� ";
cin>>year;
cout<<"��������";
cin>>lilv;
year=12*year;
lilv2=lilv/12.0;
lilv3=lilv2+1.0;
lilv4=pow(lilv3,year);
sum=invest*lilv2*lilv4/(lilv4-1.0);
printf("ÿ��Ӧ�����Ϊ%lf",sum);


}
