#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

void* AllocateHeap(uint64_t size, int clear)
{
    void* ptr=malloc(size);
    if (clear&1)
        memset(ptr,0,size);
    return ptr;
}

void FreeHeap(void* allocation)
{
    free(allocation);
}

char* LoadTextFile(const char* name)
{
    FILE* f = fopen(name,"rb");
    fseek(f,0,SEEK_END);
    int size = ftell(f);
    char* fileData = (char*)malloc(size+1);
    fileData[size]=0;
    fseek(f,0,SEEK_SET);

    fread(fileData,1,size,f);
    fclose(f);

    return fileData;
}

void Days();

void PrintMessageC(const char* msg)
{
    printf("%s\n",msg);
}

int main(int argc,char** argv)
{
    Days();
}