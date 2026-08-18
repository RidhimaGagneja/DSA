#include<iostream>
using namespace std;

class RestaurantTable{
    int tableNumber;
    int capacity;
    bool isOccupied;

    static totalTables; // keeps track of total no. of objects created

    RestaurantTable(){
        tableNumber=0;
        capacity=4;
        isOccupied=false;



    }

    void setTableDetails(){
        cout<<"enter tableNumber , capacity, and isOccupied";
        cin>>tableNumber>>" ">>capacity>>" ">>isOccupied;
    }

    void displayTableDetails(){
        
    }
}