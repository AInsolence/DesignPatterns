/*
	Create display to show average statistic between last and previous measurements.
*/

#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
#include "WeatherData.h"

class StatisticDisplay :
	public IObserver, public IDisplayElement
{
public:
	StatisticDisplay(WeatherData* WeatherDataObject);
	~StatisticDisplay();

	void Display() override final;
	void Update() override final;

private:
	float Temperature;
	float Humidity;
	float Pressure;

	float prevTemperature;
	float prevHumidity;
	float prevPressure;

	WeatherData* WeatherDataObject;
};
