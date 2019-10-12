#include <iostream>
#include "Header.h"
#include <string>
#include <algorithm>

using namespace std;

void countFreq(int arr[], int size) {
	int* freq;
	freq = new int[size]; // create frequency array

	for (int i = 0; i < size; i++)
		freq[i] = -1; // assign -1 to all elements of freq array

	int count; // declaration
	for (int i = 0; i < size; i++) // run for every element in arr
	{
		count = 1; // assigning count to one for each element
		for (int j = i + 1; j < size; j++) // search if it is present more
		{
			if (arr[i] == arr[j])
			{
				count++; // increase if found duplicate
				freq[j] = 0; // set duplicate indice with 0
			}
		}

		if (freq[i] != 0) // check if index is not duplicate element
		{
			freq[i] = count; // assign frequency to it
		}
	}
	cout << "number -> count" << endl;
	for (int i = 0; i < size; i++)
	{
		if (freq[i] != 0) // print frequency of each unique element
		{
			cout << arr[i] << " -> " << freq[i] << endl;
		}
	}
}

int main()
{
	int size; // declare size variable
	cout << "Size of array: "; // print msg
	cin >> size; // take input
	int* arr;
	arr = new int[size]; // declare array
	for (int i = 0; i < size; i++) // take input
	{
		cout << "Enter Element " << i << ": ";
		cin >> arr[i];
	}
	countFreq(arr, size); // call count freq
}
