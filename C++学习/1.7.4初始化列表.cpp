/*
初始化列表
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
//	char c;
//	//CPeople() :a(25), d(168.0), c('H')
//	//{
//	//	
//	//}
//	////初始化列表进行初始化
//
//	CPeople(int a1, double d1) :a(a1), d(d1)
//	{
//		//用a1给a初始化，用d1给d初始化
//		//变量初始化的顺序与初始化列表的顺序无关，只与变量声明的顺序有关
//	}
//
//	//CPeople()
//	//{
//	//	a = 23;
//	//}//构造函数进行赋值
//};
//
//int main()
//{
//	/*
//	
//	构造函数与初始化列表的区别：
//		构造函数的功能是给变量进行赋值，初始化列表的功能是给变量进行初始化
//
//	初始化列表：
//		定义好构造函数后，在构造函数的参数小括号后对变量进行初始化，具体形式如下
//			>CPeople() :a(25), d(168.0), c('H')
//			>{
//			>
//			>}
//		在使用初始化列表时，构造函数内就不建议再书写其他代码或者变量的赋值
//		同时初始化列表可以与参数传递配合使用，直接初始化需要的数值
//	*/
//	CPeople cp1 = { 25,168.0 };
//	cout << cp1.a << ' ' << cp1.d << endl;
//	//将传递的参数当作初始值进行初始化
//
//
//	system("pause");
//	return 0;
//}