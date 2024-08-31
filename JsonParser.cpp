#include <fstream>
#include <map>
#include <vector>
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
                /* code */
            }
            
        }
};