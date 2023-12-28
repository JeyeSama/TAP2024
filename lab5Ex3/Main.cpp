#include "Stacks.h"
#include <iostream>

int main(void) {
	ArrayStack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.print();

	st.pop();
	st.print();
	std::cout << "Peek top = " << st.peek() << std::endl;

	ListStack ts;
	ts.push(1);
	ts.push(2);
	ts.push(3);
	ts.print();

	ts.pop();
	ts.print();
	std::cout << "Peek top = " << ts.peek() << std::endl;
}