#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string id;
    string contact;
public:
    Person(string name, int age, string id, string contact) {
        setName(name);
        setAge(age);
        this->id = id;
        this->contact = contact;
    }
    virtual ~Person() {}

    void setName(string name) {
        this->name = name;
        
    }
    void setAge(int age) {
        this->age = age;
        
    }
    void setID(string id) {
        this->id = id; 
    }
    void setContact(string contact) { 
        this->contact = contact; 
    }

    string getName() { 
      return name;
    }
    int getAge() {
      return age;
    }
    string getID() { 
      return id;
    }
    string getContact() { 
      return contact;
    }

    virtual void displayDetails() {
        cout << "Name: " << name << ", Age: " << age << ", ID: " << id << ", Contact: " << contact << endl;
    }

    virtual float calculatePayment() {
      return 0.0; 
    }
};

class Student : public Person {
protected:
    string enrollmentDate, program;
    float gpa;
public:
    Student(string name, int age, string id, string contact, string enrollmentDate, string program, float gpa)
        : Person(name, age, id, contact), enrollmentDate(enrollmentDate), program(program) {
        setGPA(gpa);
    }

    void setGPA(float gpa) {
        if (gpa >= 0.0 && gpa <= 9.0){
          this->gpa = gpa;
        }
        else cout << "Invalid GPA!\n";
    }

    float getGPA() {
        return gpa; 
    }

    void displayDetails() override {
        Person::displayDetails();
        cout << "Enrollment Date: " << enrollmentDate << ", Program: " << program << ", GPA: " << gpa << endl;
    }

    float calculatePayment() override { 
      return 1000.0; 
    }
};

class Professor : public Person {
protected:
    string department, specialization, hireDate;
public:
    Professor(string name, int age, string id, string contact, string department, string specialization, string hireDate)
        : Person(name, age, id, contact), department(department), specialization(specialization), hireDate(hireDate) {}

    void displayDetails() override {
        Person::displayDetails();
        cout << "Department: " << department << ", Specialization: " << specialization << ", Hire Date: " << hireDate << endl;
    }

    float calculatePayment() override { 
      return 5000.0;
    }
};


class Course {
private:
    string code, title, description;
    int credits;
public:
    Course(string code, string title, int credits, string description)
        : code(code), title(title), description(description) {
        setCredits(credits);
    }

    void setCredits(int c) {
        if (c > 0) credits = c;
        else cout << "Invalid credits!\n";
    }

    void displayDetails() {
        cout << "Course Code: " << code << ", Title: " << title << ", Credits: " << credits << ", Description: " << description << endl;
    }
};

class Department {
private:
    string name, location;
    double budget;
public:
    Department(string name, string location, double budget) : name(name), location(location), budget(budget) {}
    void displayDetails() {
        cout << "Department Name: " << name << ", Location: " << location << ", Budget: " << budget << endl;
    }
};

int main() {
    Student s("Ansh RAna", 17, "24csu275", "24csu275@ncuindia.edu", "2025-07-20", "Engineering", 9);
    Professor p("Sir Rupesh", 69, "24CSu259", "24csu259@ncuindia,edu", "SOET", "SYstem", "2000-01-4");
    Course c("CLl151", "SYStem", 4, "Introduction to system");
    Department d("SYsten", "System Block", 750000);

    s.displayDetails();
    cout << "Student Payment: " << s.calculatePayment() << "\n";

    p.displayDetails();
    cout << "Professor Payment: " << p.calculatePayment() << "\n";

    c.displayDetails();
    cout << endl;

    d.displayDetails();
    return 0;
}
