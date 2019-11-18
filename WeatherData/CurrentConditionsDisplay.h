/**
* @file CurrentConditionsDisplay.h
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Объявление класса вывода данных на данный момент
*/
#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:
	/**
	* Конструктор класса добавляющий объект наблюдения
	*
	* @param s Ссылка на объект
	*/
	CurrentConditionsDisplay(Subject* s);
	/**
	* Изменение данных
	*
	* @param temperature Температура
	* @param humidity Влажность
	* @param pressure Давление
	*/
	void update(const float& temperature,
		const float& humidity, const float& pressure) override;
private:
	/**
	*Вывод данных
	*/
	void display() override;
	float temperature;
	float humidity;
	Subject* watherData;
};

