#include<iostream>
using namespace std;

class Animal{
public:
	virtual void makesound() const{
		cout<<"Animal makes Sounds.\n";
	}
	~Animal(){
		cout<<"Animal Destroyed.\n";
	}
};

class Cat : public Animal{
public:
	virtual void makesound() const override{
		cout<<"Meow Meow.\n";
	}
	~Cat(){
		cout<<"Cat Destroyed.\n";
	}
};

class Dog : public Animal{
public:
	virtual void makesound() const override{
		cout<<"Woo Woo.\n";
	}
	~Dog(){
		cout<<"Dog Destroyed.\n";
	}
};

int main(){
	Animal* animal;

	animal = new Dog();
	animal->makesound();
	delete animal;

	animal = new Cat();
	animal->makesound();
	delete animal;

	return 0;
}