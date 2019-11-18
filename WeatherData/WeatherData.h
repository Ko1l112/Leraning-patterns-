/**
* @file WeatherData.h
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Объявление класса WeatherData,который хранит информацию о погоде
*/
#pragma once
#include "Subject.h"
#include <vector>
#include <deque>
using namespace std;
class WeatherData : public Subject
{
public:
	/**
	* Регистрация нового наблюдателя
	*
	* @param o Ссылка на наблюдателя
	*/
	void registerObserver(Observer*o) override;
	/**
	* Удаление нового наблюдателя
	*
	* @param o Ссылка на наблюдателя
	*/
	void removeObserver(Observer* o) override;
	/**
	* Изменение данных
	*
	* @param temperature Температура
	* @param humidity Влажность
	* @param pressure Давление
	*/
	void setMeasurements(const float& temperature,
		const float& humidity,const float& pressure);
private:
	/**
	*Оповещение наблюдателей об изменении данных
	*/
	void NotifyObservers() override;
	/**
	*Вызов оповещения наблюдателей об изменении данных
	*/
	void measurementsChanged();
	float temperature;
	float humidity;
	float pressure;
	vector<Observer*> observers;
};

