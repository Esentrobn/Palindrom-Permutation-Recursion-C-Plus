#ifndef _RECURSIVE
#define _RECURSIVE


#include "recursiveInterface.h"
#include <string>


using namespace std;

template<class ItemType>
class recursive : public recursiveInterface<ItemType>
{
public:
	recursive();
	int factorial(int numb);
	void permutation(ItemType* arr, int curr, int size);
	void output(ItemType* arr, int curr, int size);
	void palindrome(ItemType* arr, int curr, int size);
	void swap(ItemType* fir, ItemType* sec);
	void kth(int A[], int start, int end, int K);
	int partition(int A[], int start, int end);
};


#endif