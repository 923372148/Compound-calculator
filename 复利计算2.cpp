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
printf("\n\n\n\n                       欢迎使用利息计算系统！\n\n");
printf("                         您想计算什么\n");
printf("                           1.单利\n");
printf(" 	                   2.复利\n");
printf(" 	         	   3.一定金额所需本金（复利）\n");
printf(" 		          4.退出\n");


scanf("%d",&choice);

switch(choice)
{case 1:system("CLS");danli();break;
 case 2:system("CLS");fuli();break;
 case 3:system("CLS");benjin();break;
 case 4:exit(0);
}
printf("\n\n              你想继续计算么(  Y  |  N   )\n");
getchar();
scanf("%c",&choice2);
if(choice2==89||choice2==121){
	goto end1;}
else exit(0);

}
void danli()
{ 
double invest;     //投资金额
int year=3;

printf("请输入投资金额\n");
cin>>invest;
cout<<endl;
printf("请输入存入年期\n");
scanf("%d",&year);
 double inv;    //单利利息
cout<<"输入单利利息";
cin>>inv;

double sum1=0;   //单利
sum1=invest*inv*(double)year+invest;
printf("单利金额为\n");
printf("%lf",sum1);


}
void fuli(){
double lixi2; 
double invest;     //投资金额
int year=3;

printf("请输入投资金额\n");
cin>>invest;
cout<<endl;
printf("请输入存入年期\n");
scanf("%d",&year);
double double_inv;    //复利利息
cout<<"输入复利利息";
cin>>double_inv;

double sum2 =0;   //复利

lixi2=lixi(double_inv,year);

sum2=lixi2*invest;
      printf("%4lf\n",lixi2);
      printf("复利为%lf",sum2);


}

double lixi(double double_inv,int year)
{
	
	int i=0;
double x=1.0;

while(i<year)
{
 i++;
x=(1.0+double_inv)*x;     //计算复利投资的利息
	
}	printf("%4lf\n",x);
	return x;

}
void benjin()
{double lixi2; double double_inv;  
double money;     //投资金额
double sum;
int year=3;
	printf("请输入存入年期\n");
scanf("%d",&year);
cout<<"输入复利利息";
cin>>double_inv;
printf("\n请输入你想得到的金额\n");
scanf("%lf",&money);
lixi2=lixi(double_inv,year);
sum=money/lixi2;
printf("您需要存入\n%lf\n",sum);


}