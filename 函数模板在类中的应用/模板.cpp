
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
//T add(T a, T b) //无论有无默认参数，模板都不可以加 virtual
//函数模板与类成员函数可以互相调用
//add<int> 函数模板实例化以后就是模板函数
class myclass
{
public:
	template <class T>
	T add(T a)
	{
		return a;
	}
	template <class T=int>
	T add(T a, T b) //无论有无默认参数，模板都不可以加 virtual
	{ 
		show();
		return a + b;
	}
	void show()
	{

		cout << add<int>(10) << endl;
	}


	//template <class T>
	//virtual T add(T a, T b, T c) //虚函数模板不存在
	//{
	//	return a + b + c;
	//}

};

void main()
{
	myclass *p = nullptr;
	p->add(1, 2);


	cin.get();
}