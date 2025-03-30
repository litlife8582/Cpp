#include<iostream>
using namespace std;

class Category{
  public:
  int numBooks;
  Category():numBooks(0){}
  Category(int books):numBooks(books){}
};
  
int calculateTotalBooks(Category categories[], int n){
    int total=0;
    for(int i=0;i<n;i++){
        total+=categories[i].numBooks;
    }
    return total;
};

int main(){
    int n;
    cin>>n;
    Category categories[10];
    
    for(int i=0;i<n;i++){
        int  numBooks;
        cin>>numBooks;
        categories[i]=Category(numBooks);
    }
    
    int totalBooks=calculateTotalBooks(categories,n);
    cout<<"Total books: "<<totalBooks;
    return 0;
}