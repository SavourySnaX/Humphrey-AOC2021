#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

void* AllocateHeap(uint64_t size)
{
    return malloc(size);
}

char* LoadTextFile(const char* name)
{
    FILE* f = fopen(name,"rb");
    fseek(f,0,SEEK_END);
    int size = ftell(f);
    char* fileData = (char*)malloc(size);
    fseek(f,0,SEEK_SET);

    fread(fileData,1,size,f);
    fclose(f);

    return fileData;
}

void Day1();

void PrintMessageC(const char* msg)
{
    printf("%s\n",msg);
}

int main(int argc,char** argv)
{
    Day1();
}