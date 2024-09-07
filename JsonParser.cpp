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

        void handleValues(size_t* position, const char* line, size_t* lineLength){
                bool isString = false;
                printf("%d", *position);
                printf("%s", *line);
                // while (*line[*position] != '\n')
                // {
                //     char currentValue = line[position];
                //     if(currentValue == '['){
                //         // do array stuff
                //     } else if (currentValue == '"'){
                //         isString = true;
                //         /* code */
                //     } else if (currentValue == 'T' || currentValue == 'F' || currentValue == 'f' || currentValue == 't'){

                //     }   
                // }
                
        }

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
                size_t nextIndexVal = line.find_first_of(",") + 1;
                size_t keyValSplit = line.find_first_of(":") + 1;
                // Used for debug
                printf("%s", line.c_str());
                
                string attribute;

                // Used for debug
                printf("\n");

                while(line[firstValue] != '"' && firstValue != keyValSplit){
                    string character {line[firstValue]};
                    attribute.append(character);
                    firstValue++;
                }
                size_t lineLength = line.length();
                handleValues(&firstValue, line.c_str(), &lineLength);
            }
            
            return tasks;
        }
};