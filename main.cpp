#include<iostream>
#include<Windows.h>


using namespace std;

int main(void){
	char girlType;
	float high;
cout<<"请输入你的理想类型:\n"<<endl;
cout<<"A:贤惠性\n"<<endl;
cout<<"B:泼辣性\n"<<endl;
cout<<"C:文艺性\n"<<endl;
cout<<"D:运动型\n"<<endl;
//scanf("%c",&girlType);
cin>>girlType;

int salary;
cout<<"请输入您的月收入:"<<endl;
cin>>salary;//salary 必须定义为一个变量

float cm;
cout<<"请输入您的身高:[CM]"<<endl;
cin>>cm;

char girlType;
cout<<"您的理想类型是:"<<endl;
cin>>"girlType";

int salary;
cout<<"您的月收入是:"<<endl;
cout<<"您的身高是:"<<endl;

system("pause");
return 0;
}