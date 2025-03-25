#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Event{
    public:
    static int totalParticipants;
    int participantId;
    string participantName;
    
    void setParticipant(int id, string name){
        participantId=id;
        participantName=name;
        totalParticipants++;
    }
    
    int getParticipantID(){
        return participantId;
    }
    
    void displayParticipant(){
        cout<<"Participant found: Participant ID: "<<participantId<<", Name: "<<participantName;
    }
    
    static int getTotalParticipants(){
        return totalParticipants;
    }
};

int Event::totalParticipants=0;

int main(){
    int n;
    cin>>n;
    vector<Event> p(n);
    
    for(int i=0;i<n;i++){
        int id;
        string name;
        cin>>id;
        cin.ignore();
        getline(cin,name);
        p[i].setParticipant(id,name);
    }
    
    int search;
    cin>>search;
    bool flag=false;
    
    for(int i=0;i<n;i++){
        if(search==p[i].getParticipantID()){
            p[i].displayParticipant();
            flag=true;
            break;
        }
    }
    
    if(!flag){
        cout<<"Participant with ID "<<search<<" not found."<<endl;
    }
    return 0;
}
    
    
    
    
    
    