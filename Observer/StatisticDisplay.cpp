#include "StatisticDisplay.h"



StatisticDisplay::StatisticDisplay(WeatherData* WeatherDataObject)
{
	Temperature = 23.0f;
	Humidity = 50.f;
	Pressure = 700.0f;
	this->WeatherDataObject = WeatherDataObject;
	WeatherDataObject->RegisterObserver(this);
}


StatisticDisplay::~StatisticDisplay()
{
}

void StatisticDisplay::Display()
{
	std::cout << "Average temperature: " << (prevTemperature + Temperature)/2 << std::endl;
	std::cout << "Average humidity: " << (prevHumidity + Humidity)/2 << std::endl;
	std::cout << "Average pressure: " << (prevPressure + Pressure)/2 << std::endl;
}

void StatisticDisplay::Update()
{// save previous measurements
	prevTemperature = Temperature;
	prevHumidity = Humidity;
	prevPressure = Pressure;
	// get new measurements
	Temperature = WeatherDataObject->GetTemperature();
	Humidity = WeatherDataObject->GetHumidity();
	Pressure = WeatherDataObject->GetPressure();

	Display();
}
