#include <fstream>
#include <map>
#include <vector>
#include <iostream>
#include "Task.cpp"

using namespace std;


class JsonParser {
    private:
        string fileName;
        map<string, string> keyValue;

    public:
        JsonParser(string fileName){
            this->fileName = fileName;
            this->keyValue = map<string, string>();
        }
    
        
        vector<Task> getTasks(){
            vector<Task> tasks;
            ifstream tasksJson(this->fileName);

            string line;

            while (getline(tasksJson, line))
            {
                size_t firstValue = line.find_first_of("\"") + 1;
                printf("%s", line.c_str());
                
                string attribute;
                printf("\n");
                while(line[firstValue] != '"' && line[firstValue] != '\n'){
                    string character {line[firstValue]};
                    attribute.append(character);
                    firstValue++;
                }

                while (line[firstValue] != '\n')
                {
                    if(line[firstValue] == '['){
                        
                    }
                }
                
            }
            
            return tasks;
        }
};