#include <iostream>
using namespace std;
//дһ���������ӿڣ�����ɶ�������С��������
//�ӿ��жഫ��һ��ȱʡ�����������ָ�����Ͳ���A����ʽ�����ָ���ˣ��Ͱ�����ѡ���������ʽ�����ٰ������֣���
//�������Ļ����ϣ���ɶԽṹ�������ͨ�������жϴ�С�ĺ�����ʵ�֡�
struct n1
{
	int a;
	int b;
	float c;
};
struct n2
{
	double a;
	short b;
	float c;
	int d;
};
struct n3
{
	char a;
	char b;
	int *str;
};
void SortNum(int * a, int * b, int * c, int d = 1)
{
	switch (d)
	{
	case 1:
	{
			  if (*a > *b)
			  {
				  int tmp;
				  tmp = *a;
				  *a = *b;
				  *b = tmp;
			  }
			  if (*b > *c)
			  {
				  int tmp;
				  tmp = *b;
				  *b = *c;
				  *c = tmp;
			  }
			  if (*a > *b)
			  {
				  int tmp;
				  tmp = *a;
				  *a = *b;
				  *b = tmp;
			  }
	}
	case 2:
	{
			  int i, j;
			  int tmp;
			  tmp = *a;
			  if (*a > *b)
			  {
				  int tmp;
				  tmp = *a;
				  *a = *b;
				  *b = tmp;
			  }
			  if (*b > *c && *a < *c)
			  {
				  int tmp;
				  tmp = *b;
				  *b = *c;
				  *c = tmp;
			  }
			  if (*b > *c && *a > *c)
			  {
				  int tmp = *c;
				  *c = *b;
				  *b = *a;
				  *a = tmp;
			  } 
	}
	case 3:
	{
			  if (*a > *b && *a > *c)
			  {
				  int tmp = *c;
				  *c = *a;
				  if (*b > tmp)
				  {
					  int cur = tmp;
					  tmp = *b;
					  *b = cur;
				  }
			  }
				  
			  if (*a<*b, *b>*c)
			  {
				  int tmp = *c;
				  *c = *b;
				  if (*a > tmp)
				  {
					  *b = *a;
					  *a = tmp;
				  }
				  else
				  {
					  *b = tmp;
				  }
			  }	  
			  if (*a < *c, *b < *c)
			  {
				  if (*a>*b)
				  {
					  int tmp;
					  tmp = *a;
					  *a = *b;
					  *b = tmp;
				  }
			  }
				  
	}
	}
	
}
void SortNum(float * a, float * b, float * c)
{
	if (a > b)
	{
		float tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
	if (b > c)
	{
		float tmp;
		tmp = *b;
		*b = *c;
		*c = tmp;
	}
	if (*a > *b)
	{
		float tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}
int main()
{
	int m = sizeof(n1);
	int n = sizeof(n2);
	int l = sizeof(n3);
	/*int a = 3;
	int b = 4;
	int c = 2;*/
	//SortNum(&a,&b,&c,3);
	SortNum(&m, &n, &l);
	cout << m << "" << n << "" << l << endl;
	//cout << a << "" << b << "" << c << endl;
	/*float d = 3.14;
	float e = 1.2;
	float f = 2.8;
	SortNum(&d, &e, &f);
	cout << d << "" << e << "" << f << endl;*/
	return 0;
}