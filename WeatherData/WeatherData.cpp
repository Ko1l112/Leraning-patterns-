/**
* @file WeatherData.cpp
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Реализация класса WeatherData,который хранит информацию о погоде
*/
#include "WeatherData.h"
#include <algorithm>

void WeatherData::registerObserver(Observer* observer){
	observers.emplace_back(observer);
}; 
void WeatherData::removeObserver(Observer* observer) {
	auto itter = find(observers.begin(),observers.end(),observer);
	observers.erase(itter);
};

void WeatherData::NotifyObservers() {
	for_each(observers.begin(), observers.end(), [=](Observer* observer) {
		observer->update(temperature,humidity,pressure);
	});
};
void WeatherData::measurementsChanged() {
	NotifyObservers();
};

void WeatherData::setMeasurements(const float& temperature,
	const float& humidity, const float& pressure) {
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
};