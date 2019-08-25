//#include <iostream>
//using namespace std;
//
//
//
//void func(int a = 10,int b=20,int c=30)//
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}
//void swapArgs(int *pa,int *pb)
//{
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void swapArgs(float *pa, float *pb)
//{
//	float tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
////函数重载看的是参数，不是返回值
////int add(short a, short, b)
////{
////	return a + b;
////}
////short add(short a, short, b)
////{
////	return a + b;
////}
//
//int main()
//{
//	func();
//	func(5);
//	func(5,6);
//	func(5,6,7);
//
//	int a = 4, b = 7;
//	float c = 3.14, d = 1.618;
//	swapArgs(&a, &b);
//	swapArgs(&c, &d);
//
//	cout << a << "" << b << endl;
//	cout << c << "" << d << endl;
//	return 0;
//}