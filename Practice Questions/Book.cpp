#include<iostream>
using namespace std;

static int strans=0;
static int ftrans=0;

class Books{
    string* author;
    string* title;
    string* publisher;
    int* stock;
    float* price;

    public:
    Books(int n) {
        title = new string[n];
        author = new string[n];
        publisher = new string[n];
        price = new float[n];
        stock = new int[n];
    }

    void getInfo(int i);
    void search(string a,string t,int num);
    void update(string a,string t,int num,float nprice);

    ~Books(){
        delete title;
        delete author;
        delete publisher;
        delete price;
        delete stock;
        
    }
};

void Books::getInfo(int i){
    cout<<"Give the information of book no."<<i+1<<" :\n";
    cout<<"Author: ";
    cin>>author[i];
    cout<<"Title: ";
    cin>>title[i];
    cout<<"Publisher: ";
    cin>>publisher[i];
    cout<<"Stock: ";
    cin>>stock[i];
    cout<<"Price: ";
    cin>>price[i];
}

void Books::search(string a,string t,int num){
    bool flag=false;
    int index;
    for(int i=0;i<num;i++){
        if(title[i]==t && author[i]==a){
            index=i;
            flag=true;
            stock[i]--;
        }
    }
    if(flag==true){
        cout<<"Price: "<<price[index]<<endl;
        strans++;
    }else{
        cout<<"Required copies not in stock"<<endl;
        ftrans++;
    }
}

void Books::update(string a,string t,int num,float nprice){
    bool flag=false;
    for(int i=0;i<num;i++){
        if(title[i]==t && author[i]==a){
            flag=true;
            price[i]=nprice;
        }
    }
    if(flag==true){
        cout<<"Price updated";
    }else{
        cout<<"Book not found";
    }
}

int main(){
    cout<<"Enter the number of books: ";
    int n;
    cin>>n;
    Books bk(n);
    for(int i=0;i<n;i++){
        bk.getInfo(i);
    }
    
    int choice=-1;
    while(choice!=0){
        cout<<"Enter choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter the book title and author: ";
            string auth,titl;
            cin>>titl;
            cin>>auth;
            bk.search(auth,titl,n);
        }

        else if(choice==2){
            cout<<"Enter the title and author and the updated price: ";
            string auth,titl;
            float uprice;
            cin>>titl;
            cin>>auth;
            cin>>uprice;
            bk.update(auth,titl,n,uprice);
        }
        else if(choice==3) break;
    }    
    return 0;
}
