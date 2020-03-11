#include <iostream>
#include "allocator.h"
using namespace std;

static size_t size;
static size_t maxsize;
static char* start = nullptr;

void makeAllocator(size_t max_size) {

	maxsize = max_size;
	start = (char*)malloc(max_size);
	size = 0;

}

char* alloc(size_t size_request)
{
	if (size_request + size > maxsize) {

		return nullptr;
	}
	else {

		char* cur_pointer = start + size;
		size += size_request;
		return cur_pointer;

	}
		
}

void reset()
{
	size = 0;

}

void delete_allocator() {

	free(start);
	maxsize = 0;
	size = 0;
}