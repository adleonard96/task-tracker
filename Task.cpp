using namespace std;
#include <string>
#include <stdio.h>
#include <ctime>

class Task {
    public:
        string id;
        string description;
        string status;
        time_t createdAt;
        time_t updatedAt;
        Task(string id, string description, string status, time_t createdAt, time_t updatedAt){
            this->id = id;
            this->description = description;
            this->status = status;
            this->createdAt = createdAt;
            this->updatedAt = updatedAt;  
        }

        void setUpdatedAt(){
            time_t now;
            time(&now);
            this->updatedAt = now;
        }
};