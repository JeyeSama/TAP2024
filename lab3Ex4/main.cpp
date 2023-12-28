#include "productie.h"
#include <iostream>

using namespace std;

unsigned int Actor::instance = 0;

int main(void) {

	Film** actori = new Film * [2];
	for (int i = 0; i < 2; i++) {
		
		cout << Actor::getInstance();
	
	}

}