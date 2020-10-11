#include<iostream>
#include "seqlist.cpp"
using namespace std;

struct Teacher
{
	int age;
	char name[];
};

void main()
{
	Teacher t1, t2, t3;
	t1.age = 31;
	t2.age = 32;
	t3.age = 33;
	seqlist<Teacher> list(10);

	list.insert(t1,0);
	list.insert(t2, 0);
	list.insert(t3, 0);
	Teacher tmp;

	for (int i = 0;i < list.getLen();i++)
	{
		list.GET(tmp,i);
		cout << tmp.age << endl;
	}

	while (list.getLen()>0)
	{
		list.Delete(tmp, 0);
		cout << tmp.age << endl;
	}


	////多个指针指向同一地址实验
	//int* a = new int(10);
	//int* b = a;
	//cout << a << " " << *a << endl;
	//cout << b << " " << *b << endl;
	////delete b;
	///*b = NULL;
	//cout << a << " " << *a << endl;
	//cout << b << endl;*/
	//a = NULL;
	//cout << a  << endl;
	//cout << b << endl;

	system("pause");
}