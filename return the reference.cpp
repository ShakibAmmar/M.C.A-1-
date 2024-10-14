#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
   
    Person(string n, int a) : name(n), age(a) {}

 
    Person* setName(string n) {
        this->name = n;
        return this; 
    }

  
    Person* setAge(int a) {
        this->age = a;
        return this; 
    }

   
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
  
    Person person("Alice", 25);

    
    person.setName("Bob")->setAge(30)->display();

    return 0;
}
