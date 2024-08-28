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
        Task(string m_id, string m_description, string m_status, time_t m_createdAt, time_t m_updatedAt){
            id = m_id;
            description = m_description;
            status = m_status;
            createdAt = m_createdAt;
            updatedAt = m_updatedAt;  
        }

        void setUpdatedAt(){
            time_t now;
            time(&now);
            updatedAt = now;
        }
};