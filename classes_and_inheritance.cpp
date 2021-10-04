#include <iostream>
#include <string>


using namespace std;

class Person {
public:

	//set the name of the person
	void setName(string n) {
		name = n;
	}
	
	//set birthdate, in YYYY-MM-DD format
	void setBirthdate(string b) {
		birthdate = b;
	}

	//return name
	string getName() {
		return name;
	}

	//return birthdate
	string getBirthdate() {
		return birthdate;
	}

	//change birthdate into age
	void setAge() {
		//separate each part into a separate string (YYYY, MM, DD)
		string y = birthdate.substr(0, 4);
		string m = birthdate.substr(5, 2);
		string d = birthdate.substr(8,2);
		//convert separate strings into integers
		int year;
		year = stoi(y);
		int month;
		month = stoi(m);
		int day;
		day = stoi(d);

		//set current date
		int cy = 2021;
		int cm = 10;
		int cd = 3;

		//if birthdate month the same as current month
		if (cm == month) {
			//if date later, birthday hasnt happened yet so current year minus birthdate year minus one
			if (cd < day) {
				age = cy - year - 1;
			}
			//else just current year minus bday year
			else {
				age = cy - year;
			}
		}
		//if birthdate month is later than current month, age is current year minus bday year minus one
		else if (cm < month) {
			age = cy - year - 1;
		}
		//else age is current year minus bday year
		else {
			age = cy - year;
		}

	}

	//output string statement
	void toString() {

		cout << "Name: " << name << ". Birthdate: " << birthdate << " Age: " << age;
	}

	//initialize variables
protected:
	string name;
	string birthdate;
	int age;

};


//inherit name and bdate
//major
//gpa

//get
//set
//convert gpa to letter
//toString

//inherit from Person
class Student: public Person {
public:
	//set major
	void setMajor(string m) {
		major = m;
	}

	//return major
	string getMajor() {
		return major;
	}

	//set gpa
	void setGpa(float g) {
		gpa = g;
	}

	//return gpa
	float getGpa() {
		return gpa;
	}

	//if else statements for gpa conversion
	void setLetterGrade() {
		if (gpa > 3.67) {
			letterGrade = "A";
		}
		else if (gpa > 3.33) {
			letterGrade = "A-";
		}
		else if (gpa > 3.00) {
			letterGrade = "B+";
		}
		else if (gpa > 2.67) {
			letterGrade = "B";
		}
		else if (gpa > 2.33) {
			letterGrade = "B-";
		}
		else if (gpa > 2.00) {
			letterGrade = "C+";
		}
		else if (gpa > 1.67) {
			letterGrade = "C";
		}
		else if (gpa > 1.33) {
			letterGrade = "C-";
		}
		else if (gpa > 1.00) {
			letterGrade = "D+";
		}
		else if (gpa > 0.67) {
			letterGrade = "D";
		}
		else if (gpa > 0.00) {
			letterGrade = "D-";
		}
		else {
			letterGrade = "F";
		}
	}

	//string statement
	void toString() {
		cout << "Name: " << name << ". Birthdate: " << birthdate << " Age: " << age << ". Major: " << major << ". GPA: " << gpa << ". Letter grade: " << letterGrade;
	}

	//intitialize variables
protected:
	string major;
	float gpa;
	string letterGrade;
};

//use test cases for Person and Student classes
int main() {
	Person p;
	p.setName("Rachel");
	p.getName();
	p.setBirthdate("1998-12-31");
	p.setAge();
	p.toString();

	Student s;
	s.setName("TJ");
	s.setBirthdate("1998-07-16");
	s.setAge();
	s.setGpa(3.60);
	s.setLetterGrade();
	s.setMajor("Computer Science");
	s.toString();
	

	return 0;

}