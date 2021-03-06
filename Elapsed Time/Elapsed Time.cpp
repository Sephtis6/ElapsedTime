// Elapsed Time.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>



int main()
{
	//get the start time
	auto start = std::chrono::steady_clock::now();

	//run some code
	for (int i = 0; i < 1e7; i++) {
		std::cout << "";
	}

	//get the end time
	auto end = std::chrono::steady_clock::now();

	//find the difference
	double elapse_time_ns = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count());



	//output
	std::cout << "Elapsed Time (s): " << elapse_time_ns / 1e9 << std::endl;



	system("pause");
    return 0;
}

