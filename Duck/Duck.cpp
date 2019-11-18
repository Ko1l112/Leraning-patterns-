/**
* @file Duck.cpp
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Реализация класса Duck
*/
#include "Duck.h"
#include <string>

void Duck::performFly() {
	flybehavior->Fly();
}
void Duck::performQuack() {
	quackbehavior->quack();
}
void Duck::Display() {
	cout << type_ << endl;
}
void Duck::SetFlyBehavior(FlyBehavior* flybehavior) {
	this->flybehavior = flybehavior;
};
void Duck::SetQuackBehavior(QuackBehavior* quackbehavior){
	this->quackbehavior = quackbehavior;
};