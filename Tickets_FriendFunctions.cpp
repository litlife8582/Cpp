#include<iostream>
#include<vector>
using namespace std;

class Ticket{
    private:
    int ticketId;
    
    public:
    Ticket(int id):ticketId(id){}
    
    int getId() const{
        return ticketId;
    }
};

class Reservation{
    private:
    vector<Ticket> reservedTickets;
    
    public:
    Reservation(vector<int>& ticketIds){
        for(int id: ticketIds){
            reservedTickets.push_back(Ticket(id));
        }
    }
    
    void printReservedTickets() const{
        cout<<"Reserved Tickets: ";
        for(const auto& ticket: reservedTickets){
            cout<<ticket.getId()<<" ";
        }
        cout<<endl;
    }
    
    friend void cancelReservation(Reservation&,const Ticket&);
};

void cancelReservation(Reservation& res,const Ticket& ticket){
    bool found=false;
    for(auto it=res.reservedTickets.begin();it!=res.reservedTickets.end();++it){
        if(it->getId()==ticket.getId()){
            cout<<"Ticket with ID "<<ticket.getId()<<" has been canceled."<<endl;
            res.reservedTickets.erase(it);
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Ticket with ID"<<ticket.getId()<<" not found in the reservation."<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> ticketIds(n);
    
    for(int i=0;i<n;i++){
        cin>>ticketIds[i];
    }
    
    Reservation reservation(ticketIds);
    
    reservation.printReservedTickets();
    
    int cancelIds;
    cin>>cancelIds;
    Ticket ticketToCancel(cancelIds);
    
    cancelReservation(reservation,ticketToCancel);
    
    reservation.printReservedTickets();
    
    return 0;
}