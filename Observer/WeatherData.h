/*
	Realize Subject element interface
*/

#pragma once
#include "ISubject.h"
#include <list>

class WeatherData : public ISubject
{
public:
	WeatherData();
	~WeatherData();

	float GetTemperature() const;
	float GetHumidity() const;
	float GetPressure() const;
	// realization of the subject interface
	void RegisterObserver(IObserver* Object) override final;
	void RemoveObserver(IObserver* Object) override final;
	void NotifyObservers() const override final;
	// test methods used instead of the real data from weather sensors
	void MeasurementsChanged() const;
	void SetMeasurements(float NewTemperature, float NewHumidity, float NewPressure);

private:
	float Temperature;
	float Humidity;
	float Pressure;
	std::list<IObserver*> ObserversList;
};

