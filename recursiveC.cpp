
#include <string>
#include <stdlib.h> 
#include "recursiveH.h"


template<class ItemType>
recursive<ItemType>::recursive()
{
}  // end default constructor



template<class ItemType>
int recursive<ItemType>::factorial(int numb)
{
	if (numb == 0)
		return 1;
	else
		return numb*factorial(numb - 1);
}

template<class ItemType>
void recursive<ItemType>::swap(ItemType* fir, ItemType* sec)
{
	char temp = *fir;
	*fir = *sec;
	*sec = temp;
}

template<class ItemType>
void recursive<ItemType>::permutation(ItemType* arr, int curr, int size)
{
	if (curr == size - 1)
	{
		cout << "  "; // give tab before the array
		output(arr, 0, size);
	}
	else
	{
		for (int i = curr; i<size; i++)
		{
			swap(&arr[curr], &arr[i]);
			permutation(arr, curr + 1, size);
			swap(&arr[curr], &arr[i]);
		}
	}
}

template<class ItemType>
void recursive<ItemType>::output(ItemType* arr, int curr, int size)
{
	if (curr >= size)
		cout << " ";
	else {
		cout << arr[curr];
		output(arr, curr + 1, size);
	}
}

template<class ItemType>
void recursive<ItemType>::palindrome(ItemType* arr, int curr, int size)
{
	if (curr >= size / 2)
		cout << " The word you typed is palindrome";

	else
	{
		if (arr[curr] == arr[size - 1 - curr])
			palindrome(arr, curr + 1, size);
		else
			cout << " The word you typed is not palindrome";
	}
}

template<class ItemType>
void recursive<ItemType>::kth(int A[], int start, int end, int K)
{
	int part;
	if (start > K || end < K)
	{
		cout << " "<<K << " is not between " << start << " and " << end<<". Try again";
		return;
	} 
	else if (start < end) 
        {
		part = partition(A, start, end);
		if (part == K - 1)
                {
			cout <<" "<<K <<"th smallest element: " << A[part];
		}
		if (part>K - 1){
			kth(A, start, part, K);
		}
		else{
			kth(A, part + 1, end, K);
		}
	}
	return;
}

template<class ItemType>
int recursive<ItemType>::partition(int A[], int start, int end)
{
	int i = start + 1;
	int j = i;
	int pivot = start;         // setting the first element as the pivot
	for (; i<end; i++)
        {
		if (A[i]<A[pivot])
                {

			int temp = A[i];
			A[i]= A[j];
			A[j] = temp;
			j++;
		}
	}
	if (j <= end)
        {

		int temp = A[pivot];
		A[pivot] = A[j - 1];
		A[j - 1] = temp;
	}
	return j - 1;
}