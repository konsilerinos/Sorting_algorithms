﻿#include <iostream>
#include "sorting_algorithms.h"

int main() {

	int *array = nullptr;

	sort_lib::create_f::CreateArray(array);
	sort_lib::print_f::PrintArray(array);

	sort_lib::QuickSorting(array, 0, sort_lib::data::size - 1);

	sort_lib::print_f::PrintArray(array);

	delete[] array;

	return 0;
}