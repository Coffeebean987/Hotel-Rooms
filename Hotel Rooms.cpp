
//4/10/2019
//The purpose of this program is to calculate the occupancy
//rate for a hotel. This program will ask for the number of floors
//the hotel has, the number of rooms, and the number of rooms in use per floor.
//This program will ultimately tell the user how many floors the hotel has,
//the number of rooms in and not in use, and the percentage of rooms in use in total.

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int num_rooms,		  //Number of rooms
		num_floors,		  //Number of floors
		num_taken_room,	  //Number of rooms taken
		num_taken_room_total, //Number of taken rooms total
		num_floors_total, //Number of floors in total
		num_rooms_total,  //Number of rooms in total
		num_rooms_available; //Number of rooms available

		//Ask for the number of floors for the hotel

	cout << "Hello, please enter the amount of floors in the hotel: ";
	cin >> num_floors;
	cout << endl;
	while (num_floors <= 0)
	{
		cout << "Sorry, that value for floors is to little, "
			"please submit a value of 1 or more: ";
		cin >> num_floors;
	}
	//Program will now include a counter system
	num_rooms_total = 0,
		num_floors_total = 0,
		num_taken_room_total = 0;



	int num = 0;

	for (int num = 0; num < num_floors; num++) //The accumulator
	{

		//Here, the program will check if there is a 13th floor
		// since floor 13 does not exist in most hotels.

		if (num != 13) //Checks for floor 13
		{

			cout << "Great!! How many rooms for floor #" << num << "? ";
			cin >> num_rooms;
			while (num_rooms <= 9)
			{
				cout << "Sorry, you cannot have less than 10 rooms on a floor, "
					"please enter a value of more than 10: ";
				cin >> num_rooms;


			}




			cout << "How many rooms are occupied? ";
			cin >> num_taken_room;

			while (num_taken_room > num_rooms)
			{
				cout << "You cannot have more rooms occupied then those currently on the floor. "
					"Please re-enter the amont of rooms occupied. ";
				cin >> num_taken_room;


			}


		}





		//The running total occurs here

		num_taken_room_total += num_taken_room; //Adding the total occupied rooms all together 
		num_rooms_total += num_rooms;         //Adding the total number of rooms in the hotel



	}

	//Math equation for the percentage of occupied rooms

	float occupied_rooms_percentage; //The percentage of rooms taken in total


	occupied_rooms_percentage = (static_cast<float> (num_taken_room_total) / static_cast<float> (num_rooms_total)) * 100; //Math equation for percentage

	num_rooms_available = (num_rooms_total - num_taken_room_total); //Equation to find out the number of available rooms

   //Now the program will display the results

	cout << "Total number of occupied rooms: " << setw(5) << num_taken_room_total << endl;
	cout << "Total number of rooms in the hotel: " << num_rooms_total << endl;
	cout << "Total number of floors in the hotel: " << num_floors << endl;
	cout << "Total number of rooms available: " << setw(2) << num_rooms_available << endl;
	cout << "Pertentage of occupied rooms: %" << setprecision(2) << fixed << occupied_rooms_percentage << endl;




	system("pause");												//Pauses the program for the user to look at the data
	return 0;


}
