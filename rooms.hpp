#ifndef ROOM_HPP 
#define ROOM_HPP

#include <iostream>
#include <string>
#include <main.cpp>
using namespace std;
struct Room {
	Room();
	Room(string name, string description);
	void SetNeighbors(Room* ptrNorth, Room* ptrSouth, Room* ptrEast, Room* ptrWest);
	void Setup(string name = " ", string description = " ");

	void OutputNeighbors();


	string name;
	string description;
	Room* ptrNeighborNorth;
	Room* ptrNeighborSouth;
	Room* ptrNeighborEast;
	Room* ptrNeighborWest;
};
Room::Room() {
	Setup();
}
Room::Room(string name, string description)
{
	Setup(name, description);
}
inline void Room::SetNeighbors(Room* ptrNorth, Room* ptrSouth, Room* ptrEast, Room* ptrWest)
{
	this->ptrNeighborNorth = ptrNorth;
	this->ptrNeighborSouth = ptrSouth;
	this->ptrNeighborEast = ptrEast;
	this->ptrNeighborWest = ptrWest;
}
void Room::Setup(string name, string description)
{
	this->name = name;
	this->description = description;
	ptrNeighborNorth = nullptr;
	ptrNeighborSouth = nullptr;
	ptrNeighborEast = nullptr;
	ptrNeighborWest = nullptr;
}
void Room::OutputNeighbors()
{ 
	cout << "You can go : " << endl;
	if (ptrNeighborNorth != nullptr) { cout << "North" << endl; }
	if (ptrNeighborSouth != nullptr) { cout << "South" << endl; }
	if (ptrNeighborEast != nullptr) { cout << "East" << endl; }
	if (ptrNeighborWest != nullptr) { cout << "West" << endl; }
	cout << endl;
}
#endif