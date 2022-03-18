#include <stdio.h>

class Allocator {
    char* buffer;
    unsigned offset = 0;
    unsigned max_size;

    void* alloc_raw(unsigned size);

public:
    Allocator(unsigned max_size);
    ~Allocator();

    unsigned* alloc(unsigned x);
    int* alloc(int x);
    float* alloc(float x);
    double* alloc(double x);
    char* alloc(char x);
    char* alloc(const char* string);
};

void* Allocator::alloc_raw(unsigned size) {

}

Allocator::Allocator(unsigned max_size) {

}

int main() {
    Allocator alloc(16 * 1024);
    unsigned* u = alloc.alloc(5u);
    int* i = alloc.alloc(6);
    float* f = alloc.alloc(7.0f);
    double* d = alloc.alloc(8.0);
    char* c = alloc.alloc('a');
    char* s = alloc.alloc("abc");

    printf("unsigned: %u\nint: %d\nfloat: %g\ndouble: %g\nchar: %c\nstring: %s\n", *u, *i, *f, *d, *c, s);
}