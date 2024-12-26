#pragma once
#include<iostream>
using namespace std;

template<class type>
class stack
{
private:
	type* _arr;
	int _top;
	size_t _capacity;

	//Helper Function 

	bool isFull()const
	{
		return (_top  == _capacity - 1);
	}

	bool isEmpty()const
	{
		return (_top == -1);
	}
public:
	stack(const size_t capacity ) : _capacity(capacity), _top(-1){ _arr = new type[_capacity]; }

	~stack()
	{
		delete[] _arr;
	}

	void push(const type& value)
	{
		if (isFull())
		{
			cout << "The Stack is Full !" << endl;
			return;
		}
		else
		{
         _arr[++_top] = value;

		}
		
	}

	void pop() 
	{
		if (isEmpty())
		{
			cout << "The Stack is Empty ! " << endl;
			return;
		}
		_top--;
	}


	type front()const
	{
		if (isEmpty())
		{
			cout << "The Stack is Empty ! " << endl;
			return;
		}
		return _arr[_top];
	}

	type  back()const
	{
		if (isEmpty())
		{
			cout << "The Stack is Empty ! " << endl;
			return;
		}
		return _arr[0];
		
	}


	int length()const
	{
		return (_top + 1);
	}

	int size()const
	{
		return (_capacity);
	}

	void print()const
	{
		cout << "The Element in Stack is : \n" ;
		for (int i = _top; i >= 0  ; i--)
		{
			cout << _arr[i] << " ";
		}
		cout << endl;
	}


	
};




