#include<iostream>
#include"../include/Fibonacci.h"


int main()
{
 	int input = 0, i = 0;
	std::cout << "Enter how many numbers of the Fibonacci sequence you want:\n";
	std::cin >> input;

	while(i <= input)
	{
		std::cout << Fibonacci(i) << " ";
		i++;
	}

	return 0;
}
