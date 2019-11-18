/**
* @file Source.cpp
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Изучение паттернов проектирования
*/
#include <iostream>
#include "Duck.h"
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatDisplay.h"
using namespace std;

int main() {
	cout
		<< endl
		<< "--------------------------------------------------------------"
		<< endl << endl; 
	{
		Duck* first_duck = new NotRealDuck();
		first_duck->Display();
		first_duck->performFly();
		first_duck->performQuack();
		delete first_duck;
	}
	cout
		<< endl
		<< "--------------------------------------------------------------"
		<< endl << endl; 
	{
		Duck* first_duck = new MallardDuck();
		first_duck->Display();
		first_duck->performFly();
		first_duck->performQuack();
		delete first_duck;
	}
	cout
		<< endl
		<< "--------------------------------------------------------------"
		<< endl << endl;
	{
		Duck* first_duck = new ModelDuck();
		first_duck->Display();
		first_duck->performFly();
		first_duck->performQuack();

		first_duck->SetFlyBehavior(new FlyRocketPowered);
		first_duck->performFly();
		
		delete first_duck;
	}
	cout
		<< endl
		<< "--------------------------------------------------------------"
		<< endl << endl;
	{
		WeatherData* weatherdata =
			new WeatherData();
		CurrentConditionsDisplay* current =
			new CurrentConditionsDisplay(weatherdata);
		StatDisplay* stat =
			new StatDisplay(weatherdata);

		weatherdata->setMeasurements(80,65,30.4);
		weatherdata->setMeasurements(82,70,29.2);
		weatherdata->setMeasurements(78,90,29.2);
		weatherdata->removeObserver(current);
		weatherdata->setMeasurements(3, 3, 3);
		weatherdata->registerObserver(current);
		weatherdata->setMeasurements(5, 5, 5);
	
	}
	cin.get();
}