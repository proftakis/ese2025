/*
 * bsv.cpp
 *
 *  Created on: Jun. 19, 2019
 *      Author: takis
 */

#include <iostream>
#include <vector>

using std::cout;		using std::endl;
using std::vector;

typedef vector<int> vs_t;

void print_out(const vs_t &arr, const vs_t::size_type N)
{
	cout << endl;
	for (vs_t::size_type i = 0; i != N; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

/*
 * function swap:
 * 			- takes a pointer to an array
 * 			- swaps elements n and m
 */
void swap(vs_t &arr, vs_t::size_type n, vs_t::size_type m)
{
	int store = arr[n];
	arr[n] = arr[m];
	arr[m] = store;
	return;
}

int main()
{
	vs_t a = { 10, 15, 31, 6, 2, 7, 1, 5 };
	vs_t::size_type N = a.size();

	// show original array contents
	cout << "The original array is:" << endl;
	print_out(a, N);
	cout << endl;

	bool swaps = 1;
	while (swaps)
	{
		swaps = 0;
		for (vs_t::size_type j=0; j != (N-1); ++j)
		{
			if (a[j] > a[j+1])
			{
				swap(a, j, j+1);
				swaps = 1;
			}
		}
	}
	// show updated array contents
	cout << "The sorted array is:" << endl;
	print_out(a, N);
	cout << endl;

	// end program successfully
	return 0;
}





