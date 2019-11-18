/**
* @file QuackBehavior.cpp
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Реализация класса принципа квака
*/
#include "QuackBehavior.h"

void MuteQuack::quack() const {
	cout << "Nothing" << endl;
};

void Squeak::quack() const {
	cout << "Squeak Squeak" << endl;
};
void Quack::quack() const {
	cout << "Quack Quack" << endl;
};