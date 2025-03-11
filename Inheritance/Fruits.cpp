/* Make a class named Fruit with a data member to calculate the number of fruits in a basket.
 Create two other class named Apples and Mangoes to calculate the number of apples and
 mangoes in the basket. Print the number of fruits of each type and the total number of fruits in
 the basket.*/

#include<iostream>
using namespace std;

class Fruits{
    protected:
    int totalFruit;
    
    public:
    Fruits():totalFruit(0){} //intializes total fruit to 0
    
    void addFruit(int count){
        totalFruit+=count;
    }

    int getTotalFruit(){
        return totalFruit;
    }
};

class Apple: public Fruits{
    private:
    int appleCount;

    public:
    Apple(int count){
        appleCount=count;
        addFruit(count);
    }

    void display(){
        cout<<"Number of Apples: "<<appleCount<<endl;
    }
};

class Mango:public Fruits{
    private:
    int mangoCount;

    public:
    Mango(int count){
        mangoCount=count;
        addFruit(count);
    }

    void display(){
        cout<<"Number of Mangoes: "<<mangoCount<<endl;
    }
};

int main(){
    Fruits();

    int appleCount,mangoCount;

    cout<<"Enter number of Apples: ";
    cin>>appleCount;
    
    cout<<"Enter number of Mangoes: ";
    cin>>mangoCount;

    Apple app(appleCount);
    Mango man(mangoCount);

    app.display();
    man.display();

    cout<<"Total Fruits in Basket: "<<appleCount+mangoCount<<endl;

    return 0;
}