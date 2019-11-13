#pragma once

enum class VehicleType
{
	Water = 0,
	Road = 1,
	Air = 2
};

enum class EngineType
{
	Gasoline = 0,
	Diesel = 1
};

struct Engine
{
	EngineType type;
	// Revolutions per minute - Engine speed
	// lower - (~1500-4000), medium - (~2200-6000), high - (~10000 or higher)
	int rpm;
};

class Vehicle
{
private:
	VehicleType vehicleType;
	Engine engine{};
	int seats = 0;
	
protected:
	Vehicle(const int& seats, const VehicleType& vehicleType, const Engine& engine);
	
public:
	virtual ~Vehicle();
	
	virtual void Move() = 0;

	int GetSeats() const;
	VehicleType GetVehicleType() const;
	Engine GetEngine() const;
};
