#include "CurrentConditionDisplay.h"



CurrentConditionDisplay::CurrentConditionDisplay(WeatherData* WeatherDataObject)
{
	this->WeatherDataObject = WeatherDataObject;
	WeatherDataObject->RegisterObserver(this);
}


CurrentConditionDisplay::~CurrentConditionDisplay()
{
}

void CurrentConditionDisplay::Display()
{
	Update();
	std::cout << "Current weather: " << std::endl;
	std::cout << "Temperature: " << Temperature << std::endl;
	std::cout << "Humidity: " << Humidity << std::endl;
	std::cout << "Pressure: " << Pressure << std::endl;
}

void CurrentConditionDisplay::Update()
{
	Temperature = WeatherDataObject->GetTemperature();
	Humidity = WeatherDataObject->GetHumidity();
	Pressure = WeatherDataObject->GetPressure();
}
