#include <stdio.h>
#include <string>

const int INPUT_INDEX = 1;

int main(int argc, char* argv[])
{
    if(argc <= 1){
        return 1;
    }

    printf("program input is: %s", argv[0]);
}