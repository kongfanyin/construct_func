#define _CRT_SECURE_NO_WARNINGS 1


#include<string>
#include<fstream>
#include<iostream>
using namespace std;
class cellphone
{
private:
	string Pname;
	char num[11];
public:
	cellphone()//�޲�Ĭ�Ϲ��캯�������౻������ʱ����ϵͳ����
	{
		cout << "cellphone ������������" << endl;
	}
	cellphone(string name)//�вι��캯��,���캯�����Է�������
	{
		Pname = name;
	}
	~cellphone()//��������������ʱ�Զ�����
	{
		cout << "cellpheon �����������ĵ���" << endl;
	}
};
class Human
{
private:
	string mname;
	cellphone p1;
	
protected:



public:
	Human(string name, string P_name):mname(name),p1(P_name)
	{


	}

	Human()
	{


	}
		~Human()
	{

	}
};

void test()
{
	Human p("zhangsan", "xsmax");

}
int main(char argc, char** argv)
{




	return 0;
}
	