/**
* @file StatDisplay.cpp
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Реализация класса StatDisplay
*/
#include "StatDisplay.h"
#include <algorithm>
#include <numeric>
#include <iostream>
StatDisplay::
StatDisplay(Subject* weatherData) {
	this->weatherData = weatherData;
	weatherData->registerObserver(this);
}
void StatDisplay::
update(const float& temperature,
	const float& humidity, const float& pressure) {
	this->temperatures.emplace_back(temperature);
	auto pair = minmax_element(temperatures.begin(),temperatures.end());
	this->min = *pair.first;
	this->max = *pair.second;
	this->average = accumulate(temperatures.begin(), temperatures.end(), 0) / temperatures.size();
	display();
};

void StatDisplay::
display() {
	cout
		<< "Min temperature: " << min << endl
		<< "Max temperature: " << max << endl
		<< "Average temperature: " << average << endl;
}