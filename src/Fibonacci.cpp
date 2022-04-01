#include<iostream>
#include"../include/Fibonacci.h"

int Fibonacci(int input)
{
	return ((input == 0) || (input == 1)) ? input : Fibonacci(input-1) + Fibonacci(input-2);
}
