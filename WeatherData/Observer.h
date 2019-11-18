/**
* @file Observer.h
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Класс интерфейс наблюдателя
*/
#pragma once
class Observer
{
public:
	/**
	* Обновление данных
	*
	* @param temperature Температура
	* @param humidity Влажность
	* @param pressure Давление
	*/
	virtual void update(const float& temperature,const float& humidity,const float& pressure) = 0;
};

