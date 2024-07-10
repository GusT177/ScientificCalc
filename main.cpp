#include <iostream>
#include "calc.h"
#include <cmath>
#include <string>


int main() {

	
	float number1;
	float number2 = 0;
	char opt;


	//prompt
	std::cout << "================================================" << std::endl;
	std::cout << "============   My calculator  ==================" << std::endl;
	std::cout << "================================================" << std::endl;
	std::cout << "You can do these operations: + - * / ** L sqrt" << std::endl;
	std::cout << "Choose your first number:" << std::endl;
	std::cin >> number1;
	std::cout << "What is your operation(+ - * / ** L(logs) sqrt)?" << std::endl;
	std::cin >> opt;
	if (opt == 'L'){
		std::cout << "Your Log is: " << Log(number1) << std::endl;
	}
	else {
		std::cout << "Choose your second number:" << std::endl;
		std::cin >> number2;
		std::cout << "Your result is: " << std::endl;
	}
	// check the chosed operation
	switch (opt){
	 default:
		case '+':
			std::cout << Sum(number1, number2) << std::endl;
		 break;

		case '-':
			std::cout << Minus(number1, number2) << std::endl;
		 break;

		case '*':
			std::cout << Multiply(number1, number2) << std::endl;
			break;

		case '/':
			std::cout << Divide(number1, number2) << std::endl;
			break;

		break;
	}

	
}