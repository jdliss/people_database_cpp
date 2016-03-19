#include "people_database.cpp"

using namespace std;

int main()
{
  cout << endl;
  cout << "INITIALIZING A DATABASE WITH SINGLE PERSON INFO..." << endl;

  PeopleDatabase singleDatabase = PeopleDatabase("Claudia", "Keisenhofer", "CK@email.com", "Austria");
  singleDatabase.printInfo();

  cout << "\nINITIZIALIZING DATABASE WITH ARRAY OF PEOPLE OBJECTS..." << endl;
  vector<Person> people;
  people.push_back(Person("Jon", "Bernesser", "JB@email.com", "NY"));
  people.push_back(Person("Jon", "Liss", "JL@email.com", "CO"));
  people.push_back(Person("Drew", "Thompson", "DT@email.com", "IN"));

  PeopleDatabase database = PeopleDatabase(people);
  database.printInfo();

  cout << endl << "ADDING MORE PEOPLE INTO SAME DATABASE..." << endl;

  vector<Person> new_people;
  new_people.push_back(Person("Marina", "Corona", "MC@email.com", "CO"));
  new_people.push_back(Person("Matt", "Pindell", "MP@email.com", "CO"));

  database.addPeople(new_people);
  database.printInfo();

  cout << "\nREMOVING ENTRY WITH THIS EMAIL: MC@email.com" << endl;
  database.removeByEmail("MC@email.com");
  database.printInfo();

  cout << "\nCAN'T FIND THIS EMAIL ADDRESS ANYMORE: MC@email.com" << endl;
  database.removeByEmail("MC@email.com");
  database.printInfo();

  cout << "\nFINDING ALL BY STATE: CO" << endl;
  vector<Person> allByState = database.returnAllbyState("CO");
  for (vector<Person>::iterator i = allByState.begin(); i != allByState.end(); i++)
    i->printPerson();

  cout << endl;
  return 0;
}
