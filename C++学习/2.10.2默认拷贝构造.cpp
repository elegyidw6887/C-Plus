/*
Ĭ�Ͽ�������
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class CExample
//{
//public:
//
//	int i;
//	char c[4];
//
//	CExample()
//	{
//
//		i = 25;
//		strcpy(c, "Yep");
//		//�ַ���������������һ������Ϊ�ַ��������ַ���ڶ�������ΪԴ�ַ���
//	}
//
//	CExample(const CExample& a)
//	{
//
//		this->i = a.i;
//		strcpy(this->c, a.c);
//		//�ֶ������Ĭ�Ͽ���������ͬ��Ч��
//	}
//
//};
//
//int main()
//{
//	/*
//	
//	Ĭ�Ͽ���������
//		ϵͳĬ�ϵĿ������죬���������ֵ�Ǿ�̬��Ա����Ա�ĸ�ֵΪǳ���ƣ������Ƶ��ǳ�Ա��ֵ
//		ϵͳĬ�ϵĿ��������ֱ���Ϊ��ǳ������
//	
//	*/
//	//����һ������
//	CExample ce1;
//	cout << ce1.i << ' ' << ce1.c << endl;
//	//����һ���µĶ����ô��ڵĶ�����и�ֵ
//	CExample ce2 = ce1;
//	cout << ce2.i << ' ' << ce2.c << endl;
//
//
//	system("pause");
//	return 0;
//}