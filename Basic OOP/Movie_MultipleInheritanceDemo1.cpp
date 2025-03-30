#include<iostream>
#include<string>
using namespace std;

class Ticket{
  public:
  string cname;
  int cprice;
  string mname;
  int mprice;
  
  void GetDetails(){
      getline(cin,cname);
      cin>>cprice;
      cin.ignore();
      getline(cin,mname);
      cin>>mprice;
  }
};

class ConcertTicket:virtual public Ticket{
    
};

class MovieTicket:virtual public Ticket{
    
};

class Booking:public ConcertTicket,public MovieTicket{
    public:
    void displayBookingDetails(){
        cout<<"Concert Details: \n";
        cout<<"Event: "<<cname<<endl;
        cout<<"Price: $"<<cprice<<endl;
        
        cout<<endl;
        cout<<"Movie Details: \n";
        cout<<"Event: "<<mname<<endl;
        cout<<"Price: $"<<mprice<<endl;
    }
};

int main(){
    Booking b;
    b.GetDetails();
    b.displayBookingDetails();
    return 0;
}