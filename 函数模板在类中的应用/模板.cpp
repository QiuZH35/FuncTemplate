
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
//T add(T a, T b) //��������Ĭ�ϲ�����ģ�嶼�����Լ� virtual
//����ģ�������Ա�������Ի������
//add<int> ����ģ��ʵ�����Ժ����ģ�庯��
class myclass
{
public:
	template <class T>
	T add(T a)
	{
		return a;
	}
	template <class T=int>
	T add(T a, T b) //��������Ĭ�ϲ�����ģ�嶼�����Լ� virtual
	{ 
		show();
		return a + b;
	}
	void show()
	{

		cout << add<int>(10) << endl;
	}


	//template <class T>
	//virtual T add(T a, T b, T c) //�麯��ģ�岻����
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