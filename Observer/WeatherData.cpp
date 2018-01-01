#include "WeatherData.h"



WeatherData::WeatherData()
{
	ObserversList = {};
	// test data
	Temperature = 23.3f;
	Humidity = 57.5f;
	Pressure = 760.2f;
}


WeatherData::~WeatherData()
{
}

float WeatherData::GetTemperature() const
{
	return Temperature;
}

float WeatherData::GetHumidity() const
{
	return Humidity;
}

float WeatherData::GetPressure() const
{
	return Pressure;
}

void WeatherData::RegisterObserver(IObserver* Object)
{
	ObserversList.push_back(Object);
}

void WeatherData::RemoveObserver(IObserver* Object)
{
	ObserversList.remove(Object);
}

void WeatherData::NotifyObservers() const
{
	for (auto observer : ObserversList)
	{
		observer->Update();
	}
}

void WeatherData::MeasurementsChanged() const
{
	NotifyObservers();
}

void WeatherData::SetMeasurements(float NewTemperature, float NewHumidity, float NewPressure)
{
	Temperature = NewTemperature;
	Humidity = NewHumidity;
	Pressure = NewPressure;
	MeasurementsChanged();
}
