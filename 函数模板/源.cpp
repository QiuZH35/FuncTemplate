#include <iostream>
using namespace std;

template <class T> //����ģ�壬�����ò�����
T add(T a,T b)
{
	return a + b;
}

void main1()
{
	add(1, 2);//ʵ����������ģ�庯�����Զ����ݲ�������
	add<double>(1, 1.2);//ģ�庯����

	cin.get();
}

//class myclass
//{
//public:
//	//���Ա����ģ��
//	template <class T >
//	T add(T a, T b)
//	{
//		return a + b;
//	}
//
//	//�ྲ̬��Ա����ģ��
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
//	int num = p->sub(9, 1); //�Զ�����
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