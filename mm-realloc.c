/**
 * CMPT 295 Assignment Malloc
 *
 * Extra credit: implementing mm_realloc
 *
 * This requires mm_malloc and mm_free to be working correctly, so
 * don't start on this until you finish mm.c.
 */
#include "mm.c"

// Extra credit.
void *mm_realloc(void *ptr, size_t size)
{
    // Write your code here ...
    size_t osize;
    void* newptr; 


    // if block size is 0, free block
    if(size == 0){
        mm_free(ptr);
        return NULL;
    }

    //if the ptr is null, we call malloc
    if(ptr == NULL){
        return malloc(size);
    }    

    BlockInfo* header = UNSCALED_POINTER_SUB(ptr,WORD_SIZE);
    osize = SIZE(header->sizeAndTags);
    





    return NULL;
}
