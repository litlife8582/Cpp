#include<iostream>
#include<vector>
#include<string>
using namespace std;

class User{
    protected:
    string username;
    string name;
    
    public:
    User(const string& uname,const string &n): username(uname),name(n){}
    virtual void displayProfile() const{
        cout<<"User Profile:"<<endl;
        cout<<"Username: "<<username<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

class Blogger:public User{
    protected:
    vector<string> posts;
    
    public:
    Blogger(const string& userUsername, const string& userName):User(userUsername,userName){}
    void createPost(const string &post){
        posts.push_back(post);
    }
    void displayProfile() const override{
        User::displayProfile();
        cout<<"Posts:"<<endl;
        for(const auto &post : posts){
            cout<<post<<endl;
        }
    }
};

class Influencer: public Blogger{
    private: 
    int followerCount;
    public:
    Influencer(const string &uname,const string &n,int fCount):Blogger(uname,n),followerCount(fCount){}
    void manageFollowers(int count){
        followerCount=count;
    }
    void displayProfile() const override{
        Blogger::displayProfile();
        cout<<"Follower Count: "<<followerCount<<endl;
    }
};

int main(){
    string username,name;
    int numPost,followerCount;
    
    getline(cin,username);
    getline(cin,name);
    cin>>numPost;
    cin.ignore();
    
    Influencer influencer(username,name,0);
    
    for(int i=0;i<numPost;i++){
        string post;
        getline(cin,post);
        influencer.createPost(post);
    }
    
    cin>>followerCount;
    influencer.manageFollowers(followerCount);
    
    influencer.displayProfile();
    
    return 0;
}