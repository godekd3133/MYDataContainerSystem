#include "pch.h"
#include <iostream>
#include <vector>


#include "ArrayList.cpp"
#include "LinkedList"
int main()
{
	ArrayList<int> myArrayList =  ArrayList<int>();;
	ArrayList<int>::iterator a;
	myArrayList.push_back(5);
	myArrayList.push_back(6);
	myArrayList.push_back(7);
	myArrayList.print();
	myArrayList.reserve(5);
	myArrayList.print();

	std::cout << "Hello World!" << endl;
	return 0;
}

