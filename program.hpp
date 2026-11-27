#ifndef PROGRAM_HPP
#define PROGRAM_HPP
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Room.hpp"

class program 
{

    public:
	program();
	void Run();
    private:
	void SetupRooms();
	Room* m_ptrCurrentRoom;
	vector<Room>m_rooms;
};

program::program() {
	m_ptrCurrentRoom = nullptr;
	SetupRooms();

}

void program::Run() {
}

void program::SetupRooms()
{
	Room* room = new Room[5];
	m_rooms[0].Setup("Room 1", "This is the first room.");
	m_rooms[1].Setup("Room 2", "This is the second room");
	m_rooms[2].Setup("Room 3", "This is the third room");
	m_rooms[3].Setup("Room 4", "This is the fourth room");
	m_rooms[4].Setup("Room 5", "This is the fifth room");
	

	m_rooms[0].SetNeighbors(nullptr, m_rooms[5], m_rooms[3];

	for (int i = 0; i < roomCount; i++)
	{
		m_rooms.push_back(room[i]);
	}
	delete[] room;
}
#endif