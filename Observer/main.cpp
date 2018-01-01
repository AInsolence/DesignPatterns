#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "StatisticDisplay.h"
#include "IObserver.h"

int main()
{
	WeatherData* WeatherObject = new WeatherData();
	IObserver* MainDisplay = new CurrentConditionDisplay(WeatherObject);
	IObserver* StatDisplay = new StatisticDisplay(WeatherObject);

	WeatherObject->SetMeasurements(27.7, 67.0, 800.0);
	WeatherObject->SetMeasurements(28.7, 63.0, 750.8);

	system("pause");
}