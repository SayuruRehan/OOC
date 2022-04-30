//S.R.Bopitiya - IT21470004 - G 3.2 - Malabe
#include <iostream>
using namespace std;

class Dog{
	private:
		int dogID;
		string dogName;
		string owner;
	
	public:
		void setDogDetails(int did, string dname, string own);
		void displayDogDetails();
		void setOwner();
};

void Dog::setDogDetails(int did, string dname, string own)
{
	dogID = did;
	dogName = dname;
	owner = own;
}

void Dog::displayDogDetails()
{
	cout << "DogID = "<< dogID << endl
		 << "DogName = " << dogName << endl
		 << "Owner = " << owner << endl << endl;
}

void Dog::setOwner()
{
	cout << "Input new owner of dog" << dogID << ":";
	cin >> owner;
}

int main ()
{
	Dog *d1 = new Dog();
	Dog *d2 = new Dog();
	Dog *d3 = new Dog();
	
	d1->setDogDetails(1, "Zimba", "Henry");
	d2->setDogDetails(2, "Timmy", "Amanda");
	d3->setDogDetails(3, "Toby", "Mary");
	
	d1->setOwner();
	d2->setOwner();
	d3->setOwner();
	cout<<endl;
	
	d1->displayDogDetails();
	d2->displayDogDetails();
	d3->displayDogDetails();
	
	delete d1;
	delete d2;
	delete d3;
	
	return 0;
}
