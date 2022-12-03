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
	cellphone()//无参默认构造函数，在类被创建的时候由系统调用
	{
		cout << "cellphone 析构函数调用" << endl;
	}
	cellphone(string name)//有参构造函数,构造函数可以发生重载
	{
		Pname = name;
	}
	~cellphone()//析构函数，结束时自动调用
	{
		cout << "cellpheon 类析构函数的调用" << endl;
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
	