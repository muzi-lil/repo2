#include "seqlist.h"

template<typename T>
seqlist<T>::seqlist(int a)
{
	cout << a << endl;
	this->capacity = a;
	this->lenth = 0;
	parray = new T[a];
	
}
template<typename T>
seqlist<T>::~seqlist(void)
{
	delete[]parray;
	parray = nullptr;

}

template<typename T>
int seqlist<T>::getLen()
{
	return 0;
}

template<typename T>
int seqlist<T>::Capacity(int a)
{
	return capacity;
}

template<typename T>
int seqlist<T>::insert(T& t, int pos)
{
	int i = 0;
	if ( pos < 0)
	{
		return -1;
	}

	//Ԫ�غ���
	for (int i = lenth; i > pos; i--)
	{
		parray[i] = parray[i - 1];
	}

	//����Ԫ��
	parray[i] = t;
	this->lenth++;
	return 0;
}

template<typename T>
int seqlist<T>::GET(T& t, int pos)
{
	int i = 0;
	if ( pos < 0)
	{
		return -1;
	}
	t = parray[pos];
	return 0;
}

template<typename T>
int seqlist<T>::Delete(T& t, int pos)
{
	t = parray[pos];//��ȡԪ��

	for (int i = pos + 1; i <lenth; i++)//��һ��Ԫ��ǰ��
	{
		parray[i - 1] = parray[i];
	}
	lenth--;
	return 0;
}