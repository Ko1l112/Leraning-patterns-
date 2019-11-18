/**
* @file StatDisplay.h
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Объявление класса вывода статистики
*/
#pragma once
#include <deque>
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
using namespace std;
class StatDisplay : public Observer, public DisplayElement
{
public:
	/**
	* Конструктор класса добавляющий объект наблюдения
	*
	* @param s Ссылка на объект
	*/
	StatDisplay(Subject* s);
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
	float average;
	float min;
	float max;
	deque<float> temperatures;
	Subject* weatherData;
};

