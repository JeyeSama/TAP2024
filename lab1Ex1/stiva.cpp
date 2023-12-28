#include"stiva.h"
#include<iostream>
using namespace std;
Array_Stack::Array_Stack(int max) {//se definesc toate metodele clasei
    this->max = max;
    this->top = 0;
    this->vector = new int[max];
}
Array_Stack::Array_Stack(const Array_Stack& param) {
    this->max = param.max;
    this->top = param.top;
    this->vector = new int[max];
    for (int i = 0; i < top; ++i)
        this->vector[i] = param.vector[i];
}
Array_Stack::~Array_Stack() {
    this->top = 0;
    this->max = 0;
    delete[] this->vector;
}
bool Array_Stack::isempty() {
    if (this->top == NULL) {
        return true;
    }
    else
        return false;

}
bool Array_Stack::isfull() {
    if (this->top == this->max) {
        return true;
    }
    else
        return false;

}
int Array_Stack::peek() {
    if (isempty()) throw Stack_Underflow();
    else return this->vector[this->top];
}
int Array_Stack::pop() {
    if (isempty()) throw Stack_Underflow();
        
    else
       this->top = this->top - 1;
       return this->vector[this->top];

}
void Array_Stack::push(int element) {
    if (isfull()) throw Stack_Overflow();
    else {
        vector[this->top] = element;
        this->top = this->top + 1;
    }
        
}
void Array_Stack::print() {
    for (int i = 0; i < top; ++i) {
        cout << vector[i] << "\n";
    }
}
