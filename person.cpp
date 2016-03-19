#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
public:

  Person()
  {
    this->first_name = "First";
    this->last_name = "Last";
    this->email = "first_last@email.com";
    this->state = "None";
  }

  Person(string first, string last, string mail, string st)
  {
    this->first_name = first;
    this->last_name = last;
    this->email = mail;
    this->state = st;
  }

  string getFirstName() { return this->first_name; }
  string getLastName() { return this->last_name; }
  string getEmail() { return this->email; }
  string getState() { return this-> state; }

  vector<string> getInfo()
  {
    vector<string> info;
    info.push_back(this->first_name);
    info.push_back(this->last_name);
    info.push_back(this->email);
    info.push_back(this->state);
    return info;
  }

  void printPerson()
  {
    cout << this->first_name << ", " <<
            this->last_name << ", " <<
            this->email << ", " <<
            this->state << endl;
  }

private:
  string  first_name,
  last_name,
  email,
  state;

};
