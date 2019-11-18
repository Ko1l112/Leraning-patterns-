/**
* @file FlyBehavior.h
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Объявление класса принципа полета
*/
#pragma once
#include <iostream>
using namespace std;
//Интерфейс
class FlyBehavior
{
public:
	virtual void Fly() const = 0;
};

class FlyWithWings : public FlyBehavior {
public:
	void Fly() const override;
};

class FlyNoWay : public FlyBehavior {
public:
	void Fly() const override;
};
class FlyRocketPowered : public FlyBehavior {
	void Fly() const override;
};