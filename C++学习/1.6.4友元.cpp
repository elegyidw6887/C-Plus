/*
��Ԫ
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//private:
//
//	int age;
//	void Fun1()
//	{
//		age = 23;
//		cout << "Im a Function in the private class!" << endl;
//		cout << "Im 23 years old!" << endl;
//	}
//
//protected:
//
//	void Fun2()
//	{
//		
//		cout << "Im a Function in the protected class!" << endl;
//	}
//
//	friend void Fun();
//	//��Ԫ������������������֮�����ڵ�˽�����ݾͿ��Ա������ĺ�������
//	//protected������Ҳ���Ա�����
//	//��������Ԫ֮���൱�ڶ���Ԫ��������
//	friend class CTeacher;
//	//��Ԫ�������
//};
//
//class CTeacher
//{
//public:
//
//	CPeople cp2;
//	void Fun3()
//	{
//
//		cp2.Fun1();
//	}
//};
//
//void Fun()
//{
//
//	CPeople cp1;
//	cp1.Fun1();
//	cp1.Fun2();
//}
//
//int main()
//{
//	/*
//	
//	��Ԫ��
//		��������һ��private����֮�������Ҫ������������Ҳ���Ե��ô�˽���࣬����ͨ������һ����Ԫ�����е���
//		����˽�е��������������ɼ���
//
//	��Ԫ������
//		�����������Ԫ����������
//
//	��Ԫ�ࣺ
//		����Ԫ�������ƣ�Ҳ�ǿ�����һ��private����protected���౻�����Ĵ��������
//
//	��Ԫ���ص㣺
//		1.��Ԫ���ܷ������η���Ӱ��
//		2.��Ԫ���Դ��ڶ��
//		3.��Ԫ�ƻ�����ķ�װ�ԣ��������η���ΪȨ�������Ʒ���
//
//	�ӿں�����
//		Ϊ�����һ��private����protected���͵�������ݵĻ�ȡ��C++��˼����ʹ�ýӿں���������������һ��public���͵ĺ��������⵼������
//	
//	*/
//	Fun();
//	CTeacher ct1;
//	ct1.Fun3();
//
//
//	system("pause");
//	return 0;
//}