/*
析构函数
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//
//	int a;
//	double d;
//
//	CPeople()
//	{
//		a = 23;
//		d = 173.0;
//		cout << "构造函数自动调用~" << endl;
//	}//构造函数
//
//	~CPeople()
//	{
//
//		cout << "析构函数自动调用~" << endl;
//	}//析构函数
//
//};
//
//int main()
//{
//	/*
//	
//	析构函数：
//		对象在释放的时候（所在代码体的花括号结束的时候），自动调用的函数，与构造函数相对应（构造函数是对象声明的时候自动调用的函数）
//		作用：
//			起到清理作用，比如我们使用new给成员申请了空间，析构函数内可以释放掉这块申请的空间
//			其调用的时间决定了其主要功能
//
//		特点：
//			1.一个类中只能有一个析构函数
//			2.析构函数不能有参数
//	
//	*/
//	{
//		CPeople cp1;
//	}
//
//
//	system("pause");
//	return 0;
//}