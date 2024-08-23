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
        Task(string param_id, string param_description, string param_status, time_t param_createdAt, time_t param_updatedAt){
            id = param_id;
            description = param_description;
            status = param_status;
            createdAt = param_createdAt;
            updatedAt = param_updatedAt;  
        }

        void setUpdatedAt(){
            time_t now;
            time(&now);
            updatedAt = now;
        }
};