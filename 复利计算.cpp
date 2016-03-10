#include <IOSTREAM>
int main()
{
using namespace std;
double invest;     //投资金额
int year=3;
int i=0;
printf("请输入投资金额\n");
cin>>invest;
cout<<endl;
printf("请输入存入年期\n");
scanf("%d",&year);
double double_inv;    //复利利息
cout<<"输入复利利息";
cin>>double_inv;

double  sum2 = 0;   //复利投资利息
while(i<year)
{
 

     	sum2=(invest+sum2)*double_inv+sum2;     //计算复利投资的利息
		i++;
}
      
        cout<<"此时复利投资价值为"<<sum2<<endl;

      
    return 0;
}