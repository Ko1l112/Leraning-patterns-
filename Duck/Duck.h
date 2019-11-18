/**
* @file Duck.h
* @author Kirpichenko Daniil <ko1lmain4@gmail.com>
* @brief Объявление класса Duck
*/
#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
	Duck(FlyBehavior* fly,QuackBehavior* quack,const string& type)
	: type_(type), flybehavior(fly), quackbehavior(quack){};
	/**
	*Вывод данных
	*/
	void Display();
	/**
	*Запустить полет
	*/
	void performFly();
	/**
	*Запустить квак
	*/
	void performQuack();
	/**
	*Назначить принцип полета
	*@param f Принцип полета 
	*/
	void SetFlyBehavior(FlyBehavior* f);
	/**
	*Назначить принцип полета
	*@param q Принцип квака
	*/
	void SetQuackBehavior(QuackBehavior* q);
private:
	string type_;
	FlyBehavior* flybehavior;
	QuackBehavior* quackbehavior;
};

class MallardDuck:public Duck {
public:
	MallardDuck() : Duck(new FlyWithWings(), new Quack(), "Mallard Duck") {};
};

class NotRealDuck :public Duck {
public:
	NotRealDuck() : Duck(new FlyNoWay(), new MuteQuack(), "Not real duck") {};
};
class ModelDuck : public Duck {
public:
	ModelDuck() : Duck(new FlyNoWay(), new Quack(), "Model Duck") {};

};