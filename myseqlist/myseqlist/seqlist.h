#pragma once
#include<iostream>
using namespace std;

template<typename T>
class seqlist
{
public:
	seqlist(int a);
	~seqlist(void);

	int getLen();
	int Capacity(int a);
	int insert(T &t, int pos);
	int GET(T &t, int pos);
	int Delete(T& t, int pos);

private:
	int lenth;
	int capacity;
	T *parray=(T*)NULL;
};

