#include <iostream>

using namespace std;

void frequency(int arr[], int arrSize); // call the function

int main()
{
	int arrSize, sum = 0;
	int* arr; //declaring an array

	cout << "Size of array: ";
	cin >> arrSize;
	arr = new int[arrSize];
	
	frequency(arr, arrSize);//invoke function 
}

//FUNCTION
void frequency(int arr[], int arrSize)
{
	int element;

	for (int i = 0; i < arrSize; i++) {
		cout << "Enter Element " << i << ": ";
		cin >> element;
		arr[i] = element;
	}
	// 1, 2, 3
	int duplicates = 0; // n++
	int x;// x is the index

	for (int i = 0; i < arrSize; i++) {

		//cout << arr[i];

		x = arr[i];//1 => first index
		for (int j = 0; j < arrSize; j++) {
			if (arr[j] == x) {
				
				duplicates++; // we get a 3 cuz the first value is always equal to the second
				
			}// loop 2 ends
			
		}// loop 1 ends
		
		cout << "number: " << x;
		cout << " -> frequency: " << duplicates << endl;
		duplicates = 0;
	}
	cout << endl;
}


// Explanation
/* 
	the problem is that the same number is repeated
	- break could possibly work
	- frequency needs to be attached to a variable that tells it that duplicates do exist
*/