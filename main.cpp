#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "Task.h"

using namespace std;


const int INPUT_INDEX = 1;

int main(int argc, char* argv[])
{

    const string NO_PARAMETERS_PROVIDED_VALUE = "2>CON";
    string arg1 = argv[INPUT_INDEX];
    if(arg1 == NO_PARAMETERS_PROVIDED_VALUE){
        std::cout << "input params where not provided";
        return 1;
    }

    FILE* fileExist = fopen("tasks.json", "r");
    if(!fileExist){
        FILE* taskList = fopen("tasks.json", "w");
        fputs("{\"tasks\":[]}", taskList);
        fclose(taskList);
    }
    fclose(fileExist);

    ifstream taskListInput("tasks.json");
    string line;
    while(getline(taskListInput, line)){
        printf("%s", &line);
    }

    printf("program input is: %s", argv[0]);
}