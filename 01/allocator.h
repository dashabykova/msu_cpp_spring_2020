#pragma once
#include <iostream>

void makeAllocator(size_t maxSize);
char* alloc(size_t size);
void reset();
void delete_allocator();
