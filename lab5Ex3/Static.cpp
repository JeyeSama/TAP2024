#include "Stacks.h"
#include <iostream>
using namespace std;

ArrayStack::ArrayStack(int capacitate) {
    this->capacitate = capacitate;
    this->top = 0;
    this->vect = new int[capacitate];
}
ArrayStack::ArrayStack(const ArrayStack& param) {
    this->capacitate = param.capacitate;
    this->top = param.top;
    this->vect = new int[capacitate];
    for (int i = 0; i < top; ++i) {
        this->vect[i] = param.vect[i];
    }
}
ArrayStack::~ArrayStack() {
    this->top = 0;
    this->capacitate = 0;
    delete[] this->vect;
}
bool ArrayStack::isEmpty() {
    if (this->top == NULL) {
        return true;
    }
    else
        return false;
}
bool ArrayStack::isFull() {
    if (this->top == this->capacitate) {
        return true;
    }
    else
        return false;
}
int ArrayStack::peek() {
    if (!isEmpty()) {
        return this->vect[this->top - 1];
    }
    else {
        cout << "Eroare";
        return -3;
    }
}
int ArrayStack::pop() {
    if (!isEmpty()) {
        this->top = this->top - 1;
    }
    return this->vect[this->top];
}
void ArrayStack::push(int element) {
    if (!isFull()) {
        vect[this->top] = element;
        this->top = this->top + 1;
    }

}
void ArrayStack::print() {
    cout << "Stiva este : " << endl;
    for (int i = 0; i < top; ++i) {
        cout << vect[i] << " ";
    }
    cout << endl;
}