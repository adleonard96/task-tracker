#ifndef TASK_H
#define TASK_H

#include <string>
#include <stdio.h>
#include <ctime>

using namespace std;

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
#endif