/*
1. WAP to get and display N numbers of Hotels and static
information using encapsulation with array of objects
member by including below mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity
*/

#include<iostream>
using namespace std;

class Hotel{
	private :
		
		int hotel_id;
		char hotel_name[100];
		char hotel_type[100];
		static int hotel_rating;
		char hotel_location[100];
		int hotel_establish_year;
		char hotel_staff_quantity[100];
		char hotel_room_quantity[100];
		
		public :
		void setdata(){
		cout<<"ENTER HOTEL ID :"<<endl;
		cin>>hotel_id;
		cout<<"ENTER HOTEL NAME :"<<endl;
		cin>>hotel_name;
		cout<<"ENTER HOTEL TYPE :"<<endl;
		cin>>hotel_type;
		cout<<"ENTER HOTEL LOCATION :"<<endl;
		cin>>hotel_location;
		cout<<"ENTER HOTEL ESTABLISH YEAR :"<<endl;
		cin>>hotel_establish_year;
		cout<<"ENTER HOTEL STAFF QUANTITY :"<<endl;
		cin>>hotel_staff_quantity;
		cout<<"ENTER HOTEL ROOM QUANTITY :"<<endl;
		cin>>hotel_room_quantity;
		
		}
		
		void getdata(){
			cout<<"ID is = "<<hotel_id<<endl;
			cout<<"HOTEL NAME is = "<<hotel_name<<endl;
			cout<<"HOTEL TYPE is = "<<hotel_type<<endl;
			cout<<"HOTEL RATING is = "<<hotel_rating<<endl;
			cout<<"HOTEL LOCATION is = "<<hotel_location<<endl;
			cout<<"HOTEL ESTABLISH YEAR is = "<<hotel_establish_year<<endl;
			cout<<"HOTEL STAFF QUANTITY is = "<<hotel_staff_quantity<<endl;
			cout<<"HOTEL ROOM QUANTITY is = "<<hotel_room_quantity<<endl;
				
		}
};

	int Hotel::hotel_rating=5;

int main(){
	int i;
	Hotel h[7];
	
	for(i=0;i<7;i++){
		h[i].setdata();
		h[i].getdata();
	}
	return 0;
}

