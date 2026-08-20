#include<bits/stdc++.h>
using namespace std;

class HotelRoom{
    public:
    int roomNumber;
    string roomType;
    int pricePerNight;
    bool isBooked;


    static int totalRooms; // keeps track of total no. of hotel rooms.

    HotelRoom(){
        roomNumber=0;
        roomType="standard";
        pricePerNight=2000;
        isBooked=false;
        totalRooms++;
    }

    void setRoomDetails(){
        cout<<"room number , roomtype, pricepernight, isbooked : ";
        cin>>roomNumber>>roomType>>pricePerNight>>isBooked;
    }

    void displayRoomDetails(){
        cout<<roomNumber<<" "<<roomType<<" "<<pricePerNight<<" "<<isBooked;
    }

    double calculateBill(int nights){
        double TotalBill=pricePerNight*nights;
        return TotalBill;
    }

    static void displayTotalRooms(){
        cout<<totalRooms;
    }
};

int HotelRoom::totalRooms=0;

int main(){
    HotelRoom h1;
    HotelRoom h2;

    h1.setRoomDetails();
    h2.setRoomDetails();

    h1.displayRoomDetails();
    h2.displayRoomDetails();

    int nights;
    cout<<"number of nights: "<<endl;
    cin>>nights;

    cout << "Bill for h1: " << h1.calculateBill(nights) << endl;
    cout << "Bill for h2: " << h2.calculateBill(nights) << endl;

    HotelRoom::displayTotalRooms();

    return 0;
}