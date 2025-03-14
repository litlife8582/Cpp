/*Develop a C++ program featuring a class "Device" with private attributes
including ID (integer), name (string), and status (boolean), alongside a 
static attribute tracking the total number of devices created. Implement 
dynamic memory allocation within the constructor and include a copy 
constructor to facilitate deep copying of objects. Employ a destructor for
memory deallocation and integrate a static member function to retrieve 
the count of devices. Showcase the program's functionality by dynamically
creating two Device objects and displaying their details. Lastly, ensure 
proper memory management by deallocating memory after usage.*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Device{
    private:
    int *id;
    string *name; 
    bool *status;
    static int count;//static member function to keep the count of devices

    public:
    Device(int _id,string _name,bool _status){
        id=new int(_id);
        name=new string(_name);
        status=new bool(_status);
        count++;
    }

    //Copy Constructor or Deep Copy method
    Device(const Device& other){
        id=new int(*other.id);//Copies integer dynamically
        name=new string(*other.name);//std:: string performs deep copy automatically
        status=new bool(*other.status);//Copy boolean dynamically
    };

    //Deconstructor
    ~Device(){
        delete id;
        delete name;
        delete status;
        count--;
    }

    static int getCount(){
        return count;
    }

    void display(){
        cout<<"ID: "<<*id<<endl;
        cout<<"Name: "<<*name<<endl;
        cout<<"Status: "<<(*status?"ON":"OFF")<<endl;
    }
};

int Device::count=0;//intializing static member variable

int main(){
    vector<Device*> devices;
    int n;
    
    cout<<"Enter the number of devices: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int id;
        string name;
        bool status;

        cout<<"Enter the details of device "<<i+1<<"\n";
        cout<<"ID: ";
        cin>>id;
        cout<<"Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Status(1 for ON and 0 for OFF): ";
        cin>>status;

        devices.push_back(new Device(id,name,status));// Allocate dynamically
    }
    
    cout<<"\nAll stored Devices:\n";
    for(const auto& device:devices){
        device->display();
        cout<<"------------------------\n";
    }

    for(auto& device:devices){
        delete device;
    }
    
    return 0;
}