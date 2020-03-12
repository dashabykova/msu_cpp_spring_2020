#include "allocator.h"
#include <iostream>
#include <cassert>
using namespace std;

int main() {
	
	makeAllocator(10);
	char* ptr1 = alloc(2);
	char* ptr2 = alloc(3);
	assert(ptr1 != ptr2 && ptr1 != nullptr); //check if allocator allocates correctly
	char* ptr3 = alloc(7);
	assert(ptr3 == nullptr); //check if allocator don't allocate > maxsize
	reset();
	char* ptr4 = alloc(6);
	assert(ptr4 != nullptr); //check if reset() works correctly
	delete_allocator();
	makeAllocator(2);
	char* ptr5 = alloc(1);
	assert(ptr5 != nullptr);
	makeAllocator(-1);
	char* ptr6 = alloc(1);
	assert(ptr6 == nullptr);
	delete_allocator();
	return 0;
}
