#include <stdlib.h>
void *memset(void *ptr, int x, size_t n)
{
    int i = 0;
    unsigned char* fn_ptr = (unsigned char *)ptr;
    unsigned char swap = (unsigned char)x;
    while (i < n)
    {
        fn_ptr[i] = swap;
        i++;
    }
    return ptr;
}
void * ft_memalloc(size_t size)
{
    void *mem;

    mem = (size_t)malloc(size);
    if (!mem)
    {
        return NULL;
    }
    memset(mem,0,size);
    return mem;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // For strcmp (optional for testing string content)

void test_ft_memalloc()
{
    // Test 1: Allocate 10 bytes and check if they are initialized to 0
    char *block1 = (char *)ft_memalloc(10);
    if (block1 == NULL) {
        printf("Test 1 Failed: Memory allocation failed.\n");
        return;
    }
    for (size_t i = 0; i < 10; i++) {
        if (block1[i] != 0) {
            printf("Test 1 Failed: Memory not initialized to 0.\n");
            free(block1);
            return;
        }
    }
    printf("Test 1 Passed\n");
    free(block1);

    // Test 2: Allocate 0 bytes and check if it returns a non-NULL pointer
    char *block2 = (char *)ft_memalloc(0);
    if (block2 == NULL) {
        printf("Test 2 Failed: Memory allocation for 0 bytes returned NULL.\n");
        return;
    }
    printf("Test 2 Passed\n");
    free(block2);  // Freeing memory allocated for 0 bytes should be safe

    // Test 3: Allocate a large block of memory and check if it is initialized to 0
    size_t large_size = 1024 * 1024; // 1 MB
    char *block3 = (char *)ft_memalloc(large_size);
    if (block3 == NULL) {
        printf("Test 3 Failed: Large memory allocation failed.\n");
        return;
    }
    for (size_t i = 0; i < large_size; i++) {
        if (block3[i] != 0) {
            printf("Test 3 Failed: Large block memory not initialized to 0.\n");
            free(block3);
            return;
        }
    }
    printf("Test 3 Passed\n");
    free(block3);

    // Test 4: Allocate memory and check if it's not NULL
    size_t small_size = 5;
    char *block4 = (char *)ft_memalloc(small_size);
    if (block4 == NULL) {
        printf("Test 4 Failed: Memory allocation failed.\n");
        return;
    }
    printf("Test 4 Passed\n");
    free(block4);

    // Test 5: Check that `memset` function is working correctly
    size_t test_size = 5;
    char test_block[5];
    memset(test_block, 1, test_size);
    for (size_t i = 0; i < test_size; i++) {
        if (test_block[i] != 1) {
            printf("Test 5 Failed: `memset` did not set the bytes correctly.\n");
            return;
        }
    }
    printf("Test 5 Passed\n");
}

int main() {
    test_ft_memalloc();
    return 0;
}
*/