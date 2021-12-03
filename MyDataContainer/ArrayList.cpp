#pragma once
#include "pch.h"

using namespace std;
template<typename _Ty> class ArrayList;
template <typename _Ty> class Const_ArrayList_Iterator;

//ArrayList�� Ư¡
//Array����� ������ �����̳� �̹Ƿ� ���ӵ� �޸� �迭�� ������ �ִ�.
//��� �������� �޸𸮰� ���ӵǾ���ϹǷ� capacity�� �ʰ��ؼ� �����Ͱ� ���ԵǸ� ���� �Ҵ� �� �̵��Ѵ�.
template<typename _Ty>
class ArrayList
{
private:	//private Using
	using DataType = _Ty;
	using Container = DataType * ;
public:	//public Using
	using iterator = Const_ArrayList_Iterator<DataType>;

public:	//Constructers
	ArrayList() //Essential Defalut Constructer
	{
		reserve(4);
	}
	ArrayList(const ArrayList& _lv) //Deep Copy Constructer
	{}
	ArrayList(const ArrayList&& _rv) //Move Constructer
	{}
	ArrayList(const DataType _dataArr[])
	{}
	ArrayList(const DataType _dataArr, ...)
	{}

private:	//private Members
	Container _Container = nullptr;
	size_t _Capacity = 0;
	size_t _Size  =0 ;

private:	//private Functions

public:	//public Functions
	void reserve(size_t newSize)
	{
		assert(_Size <= newSize);

		Container newContainer = new DataType[newSize];
		if (_Container != nullptr)
		{
			for (int i = 0; i < _Size; i++)
				newContainer[i] = _Container[i];
			delete _Container;
		}
		_Container = newContainer;
	}

	void print()
	{
		for (int i = 0; i < _Size; i++)
		{
			printf("Value : %d , Address : %d\n", _Container[i], &_Container[i]);
		}
	}
	void push_back(DataType data)
	{
		_Container[++_Size -1 ] = data;
	}
	iterator erase(iterator eraseIterator)
	{
		
	}
};
template <typename _Ty>
class Const_ArrayList_Iterator
{

public:

public:

	using DataType = _Ty;
	using Container = DataType *;

	Container chainedContainer = nullptr;
	DataType * currentPoint = nullptr;
	Const_ArrayList_Iterator() {}
	Const_ArrayList_Iterator(int index, Container&  container)
	{
		chainedContainer = container;
		currentPoint = &container[index];
	}
};


