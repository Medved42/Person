#include <iostream>
using namespace std;

class Person
{
	char* name;
	char* secondname;
	char* lastname;
	int birthday;

public:
	Person(const char* nameP, const char* secondnameP, const char* lastnameP, int birthdayP)
		: name{ nameP ? new char[strlen(nameP) + 1] : nullptr },
		secondname{ secondnameP ? new char[strlen(secondnameP) + 1] : nullptr },
		lastname{ lastnameP ? new char[strlen(secondnameP) + 1] : nullptr }, birthday{ birthdayP }

	{
		if (name, secondname, lastname){
			strcpy_s(name, strlen(nameP) + 1, nameP);
			strcpy_s(secondname, strlen(secondnameP) + 1, secondnameP);
			strcpy_s(lastname, strlen(lastnameP) + 1, lastnameP);
		}

	}

	Person() : Person{ nullptr, nullptr, nullptr, 0 } {}

	Person(const Person& object)
		: name{ object.name }, secondname{ object.secondname }, lastname{ object.lastname }, birthday{ object.birthday }{}

	 ~Person(){
	
		 cout << "Delet" << this << '\n';
	 }
	 void SetName(const char* nameP) {
		 this->name = new char[strlen(nameP) + 1];
		 strcpy_s(name, strlen(nameP) + 1, nameP);
	 }
	 void SetSecondname(const char* secondnameP) {
		 this->name = new char[strlen(secondnameP) + 1];
		 strcpy_s(name, strlen(secondnameP) + 1, secondnameP);
	 }
	 void SetLastname(const char* LastnameP) {
		 this->name = new char[strlen(LastnameP) + 1];
		 strcpy_s(name, strlen(LastnameP) + 1, LastnameP);
	 }
	 void SetBirthday(int birthdayP) {
		 this->birthday = birthdayP;		 
	 }
	 char GetName() const {
		 		 
		 return this->name;
	 }

	void print(){

		cout << "Name: " << name << '\n' <<
			"Secondname: " << secondname << '\n' <<
			"Lastname: " << lastname << '\n' <<
			"Birthday: " << birthday << '\n' <<
			this << '\n';

	}
};
int main()
{
	Person person1{ "Petr", "Petrovich", "Petrov", 250120 };
	person1.print();
	
	Person person2{ person1 };
	person2.print();
	return 0;
}