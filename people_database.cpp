#include "person.cpp"

using namespace std;

class PeopleDatabase
{

private:
  vector<Person> database;

public:
  PeopleDatabase() { this->database.push_back(Person()); }

  PeopleDatabase(vector<Person> people)
  {
    for (int i = 0; i < people.size(); i++)
      this->database.push_back(people[i]);
  }

  PeopleDatabase(string first, string last, string email, string state)
  {
    database.push_back(Person(first, last, email, state));
  }

  int size() { return this->database.size(); }
  int capacity() { return this->database.capacity(); }

  void addPeople(vector<Person> new_people)
  {
    for (int i = 0; i < new_people.size(); i++)
      this->database.push_back(new_people[i]);
  }

  void printInfo()
  {
    for (int i = 0; i < this->database.size(); i++)
      database[i].printPerson();
  }

  void removeByEmail(string email)
  {
    bool found = false;
    for (vector<Person>::iterator i = this->database.begin();
        i != this->database.end(); i++)
    {
      if (i->getEmail() == email)
      {
        this->database.erase(i);
        found = true;
        break;
      }
    }
    if (!found)
      cout << "Could not find person with email matching: " << email << endl;
  }
};
