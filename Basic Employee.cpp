#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class BaseEmployee {
public: 
	inline void setFirstName(string firstName) { this->firstName = firstName; }
	inline void setlastName(string lastName) { this->lastName = lastName; }
	inline void setid(int id) { this->id = id; }
	inline void setBaseSalary(double BaseSalary) { this->BaseSalary = BaseSalary; }
protected: string firstName, lastName;
	int id;
	double BaseSalary;
};
class Employee :public BaseEmployee {
public: 
	inline void setFirstName(string firstName) { BaseEmployee::firstName = firstName; }
	inline void setlastName(string lastName) { BaseEmployee::lastName = lastName; }
	inline void setid(int id) { this->id = id; }
	inline void setBaseSalary(double BaseSalary) { BaseEmployee::BaseSalary = BaseSalary; }
	inline double getAllSalary() { sum(); return AllSalary; }
	inline int getID() { return id; }
private:
	inline void sum() {AllSalary = BaseSalary + 10;}
	double  AllSalary;
};
class HeadOfSection :public BaseEmployee {
public:
	inline void setFirstName(string firstName) { BaseEmployee::firstName = firstName; }
	inline void setlastName(string lastName) { BaseEmployee::lastName = lastName; }
	inline void setid(int id) { this->id = id; }
	inline void setBaseSalary(double BaseSalary) { BaseEmployee::BaseSalary = BaseSalary; }
	inline void setAdvansSalary(double AdvansSalary) {this->AdvansSalary = AdvansSalary;}
	inline double getAllSalary() { sum(); return AllSalary; }
	inline double getSalary() { sum(); return AllSalary; }
	inline int getID() { return id; }
private:
	inline void sum() { AllSalary = BaseSalary + AdvansSalary+20; }
	double AllSalary, AdvansSalary;
};
class HeadOfUnit :public BaseEmployee {
public: 
	  inline  void setFirstName(string firstName) { BaseEmployee::firstName = firstName; }
	  inline  void setlastName(string lastName) { BaseEmployee::lastName = lastName; }
	  inline  void setid(int id) { this->id = id; }
	  inline  void setBaseSalary(double BaseSalary) { BaseEmployee::BaseSalary = BaseSalary; }
	  inline  void setAdvansSalary(double AdvansSalary) { this->AdvansSalary = AdvansSalary; }
	  inline  void setCarNumber(int carNumber) { this->carNumber = carNumber; }
	  inline  double getAllSalary() { sum(); return AllSalary; }
	  inline  double getSalary() { sum(); return AllSalary; }
	  inline int getID() { return id; }
private:
	void sum() { AllSalary = BaseSalary + AdvansSalary + 30; }
	double AllSalary, AdvansSalary;
	int carNumber;
};
void employee();
void headOfSection();
void headOfUnit();
inline void show(int, Employee[]);
inline void show(int, HeadOfSection[]);
inline void show(int, HeadOfUnit[]);
int main()
{
	bool a = true;
	while (a)
	{
		start:
		cout << "[1]Employee\t[2]HeadOfSection\n[3]HeadOfUnit\t[4]exit";
		cout << endl << "Choice ...";
		int c;
		cin >> c;
		switch (c) {
		case 1:employee(); break;
		case 2:headOfSection(); break;
		case 3:headOfUnit(); break;
		case 4:a = false; break;
		default:cout << "Bad Choice !\n";
			goto start;
		}
	}
    return 0;
}
void employee() {
	int number;
	cout << "Enter The Number Of The Employee :";
	cin >> number;
	Employee em[300];
	string firstName, lastName;
	int id;
	double BaseSalary;

	for (int i = 0; i < number; i++)
	{
		cout << "Enter the first of the Employee [" <<i+1 << "] : ";
		cin >> firstName;
		em[i].setFirstName(firstName);
		cout << "Enter the last of the Employee [" << i+1 << "] : ";
		cin >> lastName;
		em[i].setlastName(lastName);
		cout << "Enter the BaseSalary of the Employee [" << i+1 << "] : ";
		cin >> BaseSalary;
		em[i].setBaseSalary(BaseSalary);
		em[i].setid(i+1);

	}
	cout << "if you want to show the Salary(y/n)";
	char ans;
	cin >> ans;
	if (ans == 'y' || ans == 'Y')
		show(number,em);
} 
void headOfSection() {
	int number;
	cout << "Enter The Number Of The HeadOfSection :";
	cin >> number;
	HeadOfSection em[300];
	string firstName, lastName;
	int id;
	double Advans,BaseSalary;
	for (int i = 0; i < number; i++)
	{
		cout << "Enter the first of the HeadOfSection [" << i+1 << "] : ";
		cin >> firstName;
		em[i].setFirstName(firstName);
		cout << "Enter the last of the HeadOfSection [" << i+1 << "] : ";
		cin >> lastName;
		em[i].setlastName(lastName);
		cout << "Enter the BaseSalary of the HeadOfSection [" << i+1 << "] : ";
		cin >> BaseSalary;
		em[i].setBaseSalary(BaseSalary);
		cout << "ENter the Advans of the HeadOfSection[" << i+1 << "] : ";
		em[i].setid(i + 1);
		cin >> Advans;
		em[i].setAdvansSalary(Advans);
	}
	cout << "if you want to show the Salary(y/n)";
	char ans;
	cin >> ans;
	if (ans == 'y' || ans == 'Y')
		show(number, em);
}
void headOfUnit() {
	int number;
	cout << "Enter The Number Of The HeadOfUnit :";
	cin >> number;
	HeadOfUnit em[300];
	string firstName, lastName;
	int id;
	double Advans, BaseSalary;
	for (int i = 0; i < number; i++)
	{
		cout << "Enter the first of the HeadOfUnit [" << i+1 << "] : ";
		cin >> firstName;
		em[i].setFirstName(firstName);
		cout << "Enter the last of the HeadOfUnit [" << i+1 << "] : ";
		cin >> lastName;
		em[i].setlastName(lastName);
		cout << "Enter the BaseSalary of the HeadOfUnit [" << i+1 << "] : ";
		cin >> BaseSalary;
		em[i].setBaseSalary(BaseSalary);
		cout << "ENter the Advans of the HeadOfUnit[" << i+1 << "] : ";
		cin >> Advans;
		em[i].setAdvansSalary(Advans);
		em[i].setid(i + 1);
	}
	cout << "if you want to show the Salary(y/n)";
	char ans;
	cin >> ans;
	if (ans == 'y' || ans == 'Y')
		show(number, em);
}
void show(int n, Employee em[]) {
	for (int i = 0; i < n; i++)
		cout << em[i].getID() << " : " << em[i].getAllSalary() << endl;
}
void show(int n, HeadOfSection em[]) {
	for (int i = 0; i < n; i++)
		cout << em[i].getID() << " : " << em[i].getAllSalary() << endl;
}
void show(int n, HeadOfUnit em[]) {
	for (int i = 0; i < n; i++)
		cout << em[i].getID() << " : " << em[i].getAllSalary() << endl;
}