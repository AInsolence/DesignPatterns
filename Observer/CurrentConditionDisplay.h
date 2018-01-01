/*
	Create display to show current weather condition.
*/

#pragma once
#include "IDisplayElement.h"
#include "IObserver.h"
#include "WeatherData.h"

class CurrentConditionDisplay :
	public IDisplayElement, public IObserver
{
public:
	CurrentConditionDisplay(WeatherData* WeatherDataObject);
	~CurrentConditionDisplay();
	
	void Display() override final;
	void Update() override final;

private:
	float Temperature;
	float Humidity;
	float Pressure;

	WeatherData* WeatherDataObject;
};

