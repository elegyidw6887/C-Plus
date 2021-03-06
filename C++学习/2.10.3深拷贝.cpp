/*
深拷贝
*/

//#include<iostream>
//using namespace std;
//
//class CExample
//{
//public:
//
//	int* a;
//
//	CExample()
//	{
//		a = new int[2];
//		//使用new在构造函数中申请了堆区空间之后，不要忘记释放
//		a[0] = 23;
//		a[1] = 25;
//	}
//
//	CExample(const CExample& b)
//	{
//		this->a = new int[2];
//		memcpy(this->a, b.a, 8);
//		//利用深拷贝来解决指针成员导致崩溃
//	}
//
//	~CExample()
//	{
//		delete[] a;
//		//在析构函数中释放构造函数申请的堆区空间
//	}
//
//};
//
//CExample& Fun(CExample& ce)
//{
//
//	return ce;
//}//一个参数与返回值均为引用的函数
//
//CExample* Fun2(CExample* ce2)
//{
//
//	return ce2;
//}//一个参数与返回值均为地址的函数
//
//int main()
//{
//	/*
//	
//	与默认拷贝所对应的深拷贝
//		浅拷贝存在的问题：
//			在使用new来申请堆区空间并进行操作的时候，如果声明一个新的变量并用已存在的变量进行初始化的时候，会因为二次调用析构函数来操作已经释放的
//			野指针而导致崩溃
//		深拷贝的思路：
//			浅拷贝出问题的原因是两个对象指向同样的空间，在空间被释放之后第二个对象成为野指针，因此深拷贝的思路就是重新为第二个对象申请空间
//		在函数参数与返回值方面：
//			在次方面，传递一个引用不仅可以增加运行的效率，也可以解决浅拷贝出现的问题
//			当然，均使用地址也可以解决这个问题
//	
//	*/
//	{
//		CExample ce1;
//		cout << ce1.a[0] << ' ' << ce1.a[1] << endl;
//
//		CExample ce2 = ce1;
//		cout << ce2.a[0] << ' ' << ce2.a[1] << endl;
//	}
//	//花括号用于提前调用析构函数，否则析构函数会在主函数return处调用（在当前代码块运行结束后执行析构函数）
//
//
//	system("pause");
//	return 0;
//}