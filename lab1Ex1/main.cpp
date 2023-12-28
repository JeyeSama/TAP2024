#include"stiva.h"
#include<iostream>
int main() {
	Array_Stack st;
	try {
		st.pop();
		st.print();
	}
	catch (Array_Stack::Stack_Underflow e) {
		cout << "Stack Underflow\n";
	}
	try {
		st.push(10);
		st.push(30);
		st.push(50);
		st.push(60);
		st.push(70);
	}
	catch (Array_Stack::Stack_Overflow e) {
		cout << "Stack Overflow\n";
	}
	
	Array_Stack s;
	try {
		s.push(6);
		s.push(22);
		s.push(14);
		s.pop();
		s.print();
	}
	catch (Array_Stack::Stack_Overflow ex) {
	}
	return 0;
}