/*
构造函数
*/

//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//public:
//		
//	int age;
//	float f;
//	void Fun1()
//	{
//
//		age = 23;
//		cout << age << endl;
//	}//类变量初始化函数
//
//	//构造函数的定义
//	CPeople()
//	{
//		age = 25;
//		f = 123.123f;
//		//同时要注意构造函数没有返回值
//	}
//	
//};
//
//int main()
//{
//	/*
//	
//	类中变量的初始化：
//		在类中声明的变量的初始化一般会放在一个单独的函数之中，当我们对其进行调用的时候进行初始化，这种方式并不方便，C++提供了一个全新的函数
//		来处理这种问题，那就是构造函数，构造函数会自动调用（具体的调用时间为对象创建的时候进行调用）
//	
//	*/
//	CPeople cp1;
//	//对象的创建
//	cout << cp1.age << endl;
//	CPeople* cp2;
//	//创建指针对象并不会自动调用构造函数
//	CPeople* cp3 = new CPeople;
//	//创建指针对象的时候需要申请空间才能自动调用构造函数，这是栈区和堆区变量的区别
//
//
//	system("pause");
//	return 0;
//}