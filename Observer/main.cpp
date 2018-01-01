#include "WeatherData.h"
#include "CurrentConditionDisplay.h"

int main()
{
	WeatherData* WeatherObject = new WeatherData();
	CurrentConditionDisplay MainDisplay(WeatherObject);
	MainDisplay.Display();
	WeatherObject->SetMeasurements(27.7, 67.0, 800);
	MainDisplay.Display();
	system("pause");
}