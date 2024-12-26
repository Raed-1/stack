#include<iostream>
#include"stack.h"
using namespace std;


int main()
{
	stack<int> stack1(3);
	stack<int> stack2(3);
	
	stack1.push(10);
	stack1.push(20);
	stack1.push(30);

	stack1.print();
	
	return 0;

}