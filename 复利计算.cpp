#include <IOSTREAM>
int main()
{
using namespace std;
double invest;     //Ͷ�ʽ��
int year=3;
int i=0;
printf("������Ͷ�ʽ��\n");
cin>>invest;
cout<<endl;
printf("�������������\n");
scanf("%d",&year);
double double_inv;    //������Ϣ
cout<<"���븴����Ϣ";
cin>>double_inv;

double  sum2 = 0;   //����Ͷ����Ϣ
while(i<year)
{
 

     	sum2=(invest+sum2)*double_inv+sum2;     //���㸴��Ͷ�ʵ���Ϣ
		i++;
}
      
        cout<<"��ʱ����Ͷ�ʼ�ֵΪ"<<sum2<<endl;

      
    return 0;
}