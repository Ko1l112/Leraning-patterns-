/**
* @file QuackBehavior.h
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Объявление класса принципа квака
*/
#pragma once
#include <iostream>
using namespace std;
//Интерфейс
class QuackBehavior
{
public:
	virtual void quack() const = 0;
};


class Quack : public QuackBehavior {
public:
	void quack() const override;
};
class Squeak : public QuackBehavior {
public:
	void quack() const override;
};
class MuteQuack : public QuackBehavior {
public:
	void quack() const override;
};