/**
* @file Subject.h
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Класс Subject, который является интерфейсом для работы с обсерверами
*/
#pragma once
#include "Observer.h"
class Subject
{
public:
	/**
	* Регистрация нового наблюдателя
	*
	* @param o Ссылка на наблюдателя
	*/
	virtual void registerObserver(Observer* o) = 0;
	/**
	* Удаление нового наблюдателя
	*
	* @param o Ссылка на наблюдателя
	*/
	virtual void removeObserver(Observer* o) = 0;
	/**
	*Оповещение наблюдателей об изменении данных
	*/
	virtual void NotifyObservers() = 0;
};

