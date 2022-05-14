// Association Classes

#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private :
		string empID;
		string name;

public :
		Employee(string pempID, string pname)
		{
			empID = pempID;
			name = pname;
		}
		void displayEmployee()
		{
				cout << "empID  = "  << empID << endl;
				cout << "name  = " << name << endl;
		}
};

class Project
{
private :
		string projectID;
		string name;

public :
		Project(string pprojectID, string pname)
		{
			projectID = pprojectID;
			name = pname;
		}
		void displayProject()
		{
				cout << "projectID = " << projectID << endl;
				cout << "name  = " << name << endl;
		}
};

class worksON
{
	private:
			Employee *emp;
			Project *prj;
			int hours;

	public:
			worksON(Employee *pemp, Project *pprj, int phours)
			{
				emp = pemp;
				prj = pprj;
				hours = phours;
			}
			void displayWorksON()
			{
				emp->displayEmployee();
				prj->displayProject();
				cout << " hours =" << hours << endl;
			}
};


int main()
{
	char ch;
	
	Employee *e[2];
	e[0] = new Employee("E001", "Sunil");
	e[1] = new Employee("E002", "Mala");
  
	Project *p[2];
	p[0] = new Project("P001", "C#");
	p[1] = new Project("P002", "Java");
  
	worksON work1(e[0], p[0], 2);
	worksON work2(e[1], p[0], 4);
	work1.displayWorksON();
	cout << "**********" << endl;
    work2.displayWorksON();
	delete e[0];
	cin >> ch;
  
	return 0;
}