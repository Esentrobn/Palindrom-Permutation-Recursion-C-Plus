#ifndef RECURSIVEINTERFACE

#define RECURSIVEINTERFACE

using namespace std;


template<class ItemType>
class recursiveInterface

{

public:


	/** finds the factorial
	@param  find factorial of numb
	@return  final factorial of numb.*/
	virtual int factorial(int numb) = 0;

	/**  finds strings
	@param  arr is the array
	@param curr the starting point of the array
	@param size size of the string */

	virtual void permutation(ItemType* arr, int curr, int size) = 0;

	/**  outputs the array
	@param  arr is the array
	@param curr the starting point of the array
	@param size size of the string   */

	virtual void output(ItemType* arr, int curr, int size) = 0;

	/**  check for palindrome
	@param  arr is the array
	@param curr the starting point of the array
	@param size size of the string*/

	virtual void palindrome(ItemType* arr, int curr, int size) = 0;

	/**  change the places
	@param  fir pointer of first address
	@param sec pointer of second address*/

	virtual void swap(ItemType* fir, ItemType* sec) = 0;

	/**  find kth
	@param  A is the array
	@param start the starting point of the array
	@param end max size
	@param k kth smallest number */

	virtual void kth(int A[], int start, int end, int K) = 0;

	/**  find kth
	@param  A is the array
	@param start the starting point of the array
	@param end max size
	@return  partition intger */

	virtual int partition(int A[], int start, int end) = 0;


 };


#endif