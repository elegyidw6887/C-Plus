/*
��������ĵ������
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	CPeople()
//	{
//
//	}
//	//��ͨ���캯��
//
//	CPeople(const CPeople& a)
//	{
//
//	}
//	//��������
//
//};
//
//void Fun(CPeople a)
//{
//	cout << "��ʱҲ�ᴥ����������" << endl;
//}
//
//CPeople Fun2()
//{
//	CPeople a;
//	return a;
//}
//
//int main()
//{
//	/*/
//	
//	�������죺
//		��һ������Ĺ��캯����Ҳ����Ϊ���ƹ��죩
//
//	����ÿ�������������
//		1.�½�һ�����󣬲������ʼ��Ϊͬ�����ж���
//			��������һ������CPeople cp1;
//			>CPeople cp2(cp1);
//			>CPeople cp2 = cp1;
//			>CPeople cp3 = CPeople(cp1);//��ʱ����
//			>CPeople* cp7 = new CPeople(cp1);
//		2.���������ɶ��󸱱�ʱ
//			�����������ݶ����ֵ
//			�������ض����ֵ
//	
//	*/
//	CPeople cp1;
//	CPeople cp2(cp1);
//	//��CPeople cp2 = cp1Ч����ͬ��ֻ�г�ʼ���Ż���ÿ������죬��ֵ���ᴥ������
//	CPeople cp3 = CPeople(cp1);
//	//ʹ����ʱ���������£����ֱ�����������Ż�����˲���һ���������Ĳ���һ����ʱ����
//	CPeople* cp4 = new CPeople(cp1);
//	
//	Fun(cp1);
//	//�������ݶ����ֵ
//
//	Fun2();
//	//�������ض���
//
//	system("pause");
//	return 0;
//}