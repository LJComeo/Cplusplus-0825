#include <iostream>
#include <stdlib.h>
using namespace std; //std域里面：cin、cout、endl                                     
#include "t1.h"
#include "t2.h"


namespace test//名字空间,一旦重名，直接合并
{
	namespace n1
	{
		int add(int a, int b)
		{
			cout << "1\n";
			return a + b;
		}
	}
	namespace n2
	{
		int add(int a, int b)
		{
			cout << "2\n";
			return a + b;
		}
	}
}

namespace n2
{
	int add(int a, int b)
	{
		cout << "3\n";
		return a + b;
	}

}
int main2()
{
	cout<<n2::add(3, 4);
	system("pause");
	return 0;
}
namespace N
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return left + right;
	}
	int sub(int left, int right)
	{
		return left - right;
	}
}

using N::b;
using namespace N;
int main3()
{
	//cout << a << endl;//这样写的话编译器无法找到a
	cout << N::a << endl;//这种方式的书写就可以访问到命名空间N里面的a了
	cout << b << endl;
	int c=Add(10, 20);
	cout << c << endl;
	return 0;
}