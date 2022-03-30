#include <conio.h>    //header files
#include <iostream>
#include <iomanip>
using namespace std;

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);  //function declaration

struct marks    //create structure marks
{
	int t_marks1, t_marks2;
	int student;
	float t_CA1, t_CA2;
};

int main() //begin main
{
	marks details[5];
	
	for (int i = 0; i < 5; i++) //begin for loop
	{
		cout << "Enter mark 1 for student " << i + 1 << ": ";    //user input
		cin >> details[i].t_marks1;
		
		cout << "Enter mark 2 for student " << i + 1 << ": ";
		cin >> details[i].t_marks2;
		
		cout << endl;
		
		details[i].student = i + 1;
		
		findMarks(details[i].t_marks1, details[i].t_marks2, details[i].t_CA1, details[i].t_CA2);
	}  //end for loop
	
	cout << endl;
	
	cout << setw(10) << "student" << setw(10) << "Mark 1" << setw(10) << "Mark 2" << setw(10) << "CA 1" << setw(10) << "CA 2" << endl;    //output
	
	for (int i = 0; i < 5; i++) //begin for loop
	{
		cout << setw(10) << details[i].student << setw(10) << details[i].t_marks1 << setw(10) << details[i].t_marks2 << setw(10) << setiosflags(ios::fixed) << setprecision(2) << details[i].t_CA1 << setw(10) << details[i].t_CA2 << endl;
	}    //end for loop
	
	(void)getchar();
	//return 0;
}

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2) 
{
	t_CA1 = (t_marks1 = 20) / 100.0;
	t_CA2 = (t_marks2 = 30) / 100.0;
}
