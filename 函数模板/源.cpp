#include <iostream>
using namespace std;

template <class T> //函数模板，不调用不编译
T add(T a,T b)
{
	return a + b;
}

void main1()
{
	add(1, 2);//实例化函数，模板函数，自动根据参数推理
	add<double>(1, 1.2);//模板函数。

	cin.get();
}

//class myclass
//{
//public:
//	//类成员函数模板
//	template <class T >
//	T add(T a, T b)
//	{
//		return a + b;
//	}
//
//	//类静态成员函数模板
//	template <class T>
//	static T sub(T a, T b)
//	{
//		return a - b;
//	}
//
//};
//void main()
//{
//	myclass *p = nullptr;
//	//int num=p->add<int>(2, 3);
//	int num = p->sub(9, 1); //自动推理
//	cout << num << endl;
//
//	cin.get();
// }


class myclass
{
public:
	template <class T>
	T bijiao(T a, T b)
	{
		if (a > b)
			return a;
		else
			return b;
	}
	template <class T>
	static T maxnumber(T a, T b)
	{
		if (a > b)
			return (double)a;
		else
			return (double)b;
	}
	
};

void main()
{
	myclass *p = nullptr;
	int maxnum = p->bijiao(1, 2);
	cout << maxnum << endl;
	
	cout << p->maxnumber<double>(3.2, 1.2) << endl;
	cin.get();
}