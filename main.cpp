#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;


const int INPUT_INDEX = 1;

int main(int argc, char* argv[])
{

    // if(argc <= 1){
    //     return 1;
    // }

    FILE* fileExist = fopen("tasks.json", "r");
    if(!fileExist){
        ofstream taskList("tasks.json");
        taskList.close();
    }

    ifstream taskListInput("tasks.json");
    string line;
    while(getline(taskListInput, line)){
        printf("%s", line);
    }

    printf("program input is: %s", argv[0]);
}