# include <iostream>
# include <cstring>
using namespace std;

class Animal {
protected:
	char name[20];
public:
	Animal() {}
	Animal(char tname[]) {
		strcpy(name, tname);
	}
	virtual void speak() {}
	void song() {
		cout << name << "'s Song " << endl;
		speak();
		cout << "la la la la" << endl;
		speak();
		cout << "la la la la" << endl;
		speak();
    cout << endl;
	}
};
class Cat : public Animal {
public:
	Cat() {}
	Cat(char tname[]) : Animal(tname) { }
	void speak() {
		cout << "Meow... Meow..." << endl;
	}
};

class Dog : public Animal {
public:
	Dog() {}
	Dog(char tname[]): Animal(tname) { }
	void speak() {
		cout << "Bow... Bow..." << endl;
	}
};

class Cow: public Animal {
public:
	Cow() {}
	Cow(char tname[]) : Animal(tname) { }
	void speak() {
		cout << "Moo... Moo..." << endl;
	}
};

int main()
{
	
	

	Animal *ani[4];
	ani[0] = new Cat("Micky the Cat");
	ani[1] = new Dog("Rover the Dog");
	ani[2] = new Cow("roo the Cow");
	ani[3] = new Animal("no name");
	for (int r=0;r<4; r++)
		ani[r]->song();

	
	return 0;
}