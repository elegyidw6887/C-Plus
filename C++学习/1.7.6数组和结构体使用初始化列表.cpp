/*
����ͽṹ��ʹ�ó�ʼ���б�
*/

//#include<iostream>
//using namespace std;
//
//struct TeaInfo
//{
//	int Age;
//	double High;
//};
//
//class CPeople
//{
//public:
//
//	int a[5];
//	//CPeople() :a()
//	//{
//	//	//ʹ�ô��ַ�ʽ��������ʹ�ó�ʼ���б���ʼ�����ȫΪ0�����ַ�����һ��ȫ��������������
//	//}
//
//	CPeople()
//	{
//		//error C2512: ��CPeople��: û�к��ʵ�Ĭ�Ϲ��캯������
//	}
//
//	TeaInfo tea1;
//	CPeople(TeaInfo tea) :tea1(tea)
//	{
//		memset(&a[0], 0, 20);
//	}
//
//	void show()
//	{
//		cout << tea1.Age << ' ' << tea1.High << endl;
//	}
//};
//
//struct StuInfo
//{
//	int Age;
//	double High;
//};
//
//int main()
//{
//	/*
//	
//	����ʹ�ó�ʼ���б�
//		>int a[5];
//		>CPeople() :a()
//		���ڲ������еı���������������ʹ�÷�ʽ����˿���ʹ�������ķ�ʽ���С���ʼ����
//		1.forѭ��
//			������̸
//		2.memset
//			memset(&a[0] , 0 , 20);
//
//	�ṹ��ʹ�ó�ʼ���б�
//		���ڽṹ���в�����ֱ����Ӻ��������������Ҫ���ṹ��ŵ����У�ʹ�����ж���Ĺ��캯����ʹ�ó�ʼ���б������г�ʼ��
//	
//	*/
//	CPeople cp1;
//	cout << cp1.a[0] << ' ' << cp1.a[1] << ' ' << endl;
//
//	StuInfo stu1 = { 23,173.0 };
//	StuInfo stu2 = stu1;
//	//�ṹ��֮���໥��ֵ
//	cout << stu2.Age << ' ' << stu2.High << endl;
//
//	TeaInfo tea2 = { 25,168.0 };
//	CPeople cp2 = tea2;
//	cp2.show();
//
//
//	system("pause");
//	return 0;
//}