/**
* @file FlyBehavior.cpp
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Реализация класса принципа полета
*/
#include "FlyBehavior.h"

void FlyNoWay::Fly() const {
	cout << "Can't fly" << endl;
};
void FlyWithWings::Fly() const {
	cout << "Flying" << endl;
};
void FlyRocketPowered::Fly() const {
	cout << "Flying with a rocket" << endl;
};