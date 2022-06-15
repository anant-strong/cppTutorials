// Optimised by two pointer approach complexity O(n^2)
// Two pointers is really an easy and effective technique that is typically used for searching pairs in a sorted array. 
//Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) 
//such that their sum is equal to X.

// Example
// A[] = {10, 20, 35, 50, 75, 80}
// X = 70
// i = 0
// j = 5

// A[i] + A[j] = 10 + 80 = 90
// Since A[i] + A[j] > X, j--
// i = 0
// j = 4

// A[i] + A[j] = 10 + 75 = 85
// Since A[i] + A[j] > X, j--
// i = 0
// j = 3

// A[i] + A[j] = 10 + 50 = 60
// Since A[i] + A[j] < X, i++
// i = 1
// j = 3
// m
// A[i] + A[j] = 20 + 50 = 70
// Thus this signifies that Pair is Found.
#include <bits/stdc++.h>
using namespace std;

// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(int A[], int arr_size, int sum)
{
	int l, r;
	/* Sort the elements */
	sort(A, A + arr_size);
	/* Now fix the first element one by one and find the
	other two elements */
	for (int i = 0; i < arr_size - 2; i++) {

		// To find the other two elements, start two index
		// variables from two corners of the array and move
		// them toward each other
		l = i + 1; // index of the first element in the
		// remaining elements
		r = arr_size - 1; // index of the last element
		while (l < r) {
			if (A[i] + A[l] + A[r] == sum) {
				printf("Triplet is %d, %d, %d", A[i], A[l],A[r]);
				return true;
			}
			else if (A[i] + A[l] + A[r] < sum)
				l++;
			else // A[i] + A[l] + A[r] > sum
				r--;
		}
	}
	// If we reach here, then no triplet was found
	return false;
}

/* Driver program to test above function */
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
	int sum = 22;
	int arr_size = sizeof(A) / sizeof(A[0]);
	find3Numbers(A, arr_size, sum);
	return 0;
}






// Not optimised O(n^3) complexity
// #include <bits/stdc++.h>
// using namespace std;

// // returns true if there is triplet with sum equal
// // to 'sum' present in A[]. Also, prints the triplet
// bool find3Numbers(int A[], int arr_size, int sum)
// {
// 	// Fix the first element as A[i]
// 	for (int i = 0; i < arr_size - 2; i++)
// 	{

// 		// Fix the second element as A[j]
// 		for (int j = i + 1; j < arr_size - 1; j++)
// 		{

// 			// Now look for the third number
// 			for (int k = j + 1; k < arr_size; k++)
// 			{
// 				if (A[i] + A[j] + A[k] == sum)
// 				{
// 					cout << "Triplet is " << A[i] <<
// 						", " << A[j] << ", " << A[k];
// 					return true;
// 				}
// 			}
// 		}
// 	}

// 	// If we reach here, then no triplet was found
// 	return false;
// }


// int main()
// {
// 	int A[] = { 1, 1, 2, 2, 1, 1 };
// 	int sum = 4;
// 	int arr_size = sizeof(A) / sizeof(A[0]);
// 	find3Numbers(A, arr_size, sum);
// 	return 0;
// }


