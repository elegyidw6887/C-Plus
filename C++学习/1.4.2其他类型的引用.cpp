/*
其他类型的引用
*/

#include<iostream>
using namespace std;

int main()
{
	/*
	
	引用的地址：
		不管经过几次重复的嵌套引用，只要指向的都是最原始的那个数据，那么所有引用的地址都是最初始数值的地址

	其他类型的引用：
		常量类型引用：
			使用const来声明

	其他数据类型引用：
		（引用的具体结构：引用的类型（与原类型一致）+&+引用的名称 = 要引用的变量）
		1.数组类型的引用：
				>int arr[12] = { 0 };
				>int(&p)[12] = arr;
			多维数组的引用只要对齐格式即可
		2.指针类型的引用：
	
	*/
	int a = 25;
	int& b = a;
	int& c = b;
	int& d = c;
	cout << &a << ' ' << &b << ' ' << &c << ' ' << &d << '\n';

	const int& a1 = 23;
	//使用const来声明常量类型引用

	int arr[12] = { 0 };
	int(&p)[12] = arr;
	//一维数组类型的引用
	p[2] = 12;
	cout << arr[2] << '\n';

	int* p1 = arr;
	int* (&p2) = p1;
	//指针的引用


	system("pause");
	return 0;
}