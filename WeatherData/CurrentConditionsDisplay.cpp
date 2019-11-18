/**
* @file CurrentConditionsDisplay.cpp
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Реализация класса CurrentConditionsDisplay
*/
#include "CurrentConditionsDisplay.h"
#include <iostream>
using namespace std;
CurrentConditionsDisplay::
CurrentConditionsDisplay(Subject* weatherData) {
	this->watherData = weatherData;
	weatherData->registerObserver(this);
};

void CurrentConditionsDisplay::
update(const float& temperature,
	const float& humidity, const float& pressure) {
	this->temperature = temperature;
	this->humidity = humidity;
	display();
};
void CurrentConditionsDisplay::
display() {
	cout
		<< "Current conditions: " 
		<< temperature << "F dergrees and "
		<< humidity << "% humidity" << endl;
}