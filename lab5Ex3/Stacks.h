#pragma once
#ifndef Stacks_h
#define Stacks_h
#include <iostream>
using namespace std;

class StackAbstract {
	public :
		virtual void push(int infoNou)  = 0;
		virtual int pop() = 0;
		virtual int peek()  = 0;
		virtual bool isEmpty() = 0;
		virtual void print() = 0;
};
class ArrayStack : public StackAbstract {
	private :
		int top;
		int capacitate;
		int* vect;
	public :
		ArrayStack(int capacitate=69);
		ArrayStack(const ArrayStack& obiect);
		~ArrayStack();
		ArrayStack& operator=(const ArrayStack& obiect);
		void push(int infoNou) override;
		int pop() override;
		int peek() override;
		bool isEmpty() override;
		bool isFull();
		void print();
};
class ListStack : public StackAbstract {
	class Node {
	public:
		int info;
		Node* suc;
		Node(int info = 0, Node* succ = NULL);
	};
private:
	Node* top;
public:
	ListStack(Node* n = NULL);
	ListStack(const ListStack& obiect);
	~ListStack();
	ListStack& operator=(const ArrayStack& obiect);
	void push(int infoNou) override;
	int pop() override;
	int peek() override;
	bool isEmpty() override;
	void print();
};

#endif // !Stacks_h

