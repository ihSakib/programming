#include <iostream>
using namespace std;

class Flight
{
public:
  virtual void showFlightDetails() = 0;
};

// Hierarchical
class Ticket
{
public:
  string ticket_no;
  string date;
  string location;
  string flight_type;

  Ticket(string ticket_no, string date, string location) : ticket_no(ticket_no), date(date), location(location),flight_type(flight_type) {}
};

// class EconomyClass : public Ticket
// {
// protected:
//   string flight_type = "abc";

// public:
//   EconomyClass(string ticket_no, string date, string location, string flight_type) : Ticket(ticket_no, date, location, ) {}
// };

class BusinessClass : public Ticket
{
protected:
  string flight_type = "abc";

public:
  BusinessClass(string ticket_no, string date, string location) : Ticket(ticket_no, date, location,flight_type) {}
};

// multilevel - from Flight class
class Person : public Flight
{
protected:
  string name;
  int age;

public:
  Person(string name, int age) : name(name), age(age) {}
};

class Passenger : public Person
{
protected:
  Ticket t;
  string country;

public:
  Passenger(string name, int age, Ticket t, string country) : Person(name, age), t(t), country(country) {}
};

class FrequentFlyer : public Passenger
{
protected:
  int number_of_flight;

public:
  FrequentFlyer(string name, int age, Ticket t, string country, int number_of_flight) : Passenger(name, age, t, country), number_of_flight(number_of_flight) {}

  void showFlightDetails() override
  {
    cout << "Passenger details: " << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
    cout << "Total flight: " << number_of_flight << endl;

    cout << "\nTicket Details: " << endl;
    cout << "Ticket no: " << t.ticket_no << endl;
    cout << "Date: " << t.date << endl;
    cout << "Destination: " << t.location << endl;
    cout << "Flight type: " << t.flight_type << endl;
  };
};

int main()
{
  // create a ticket
  BusinessClass bt("ABC123456", "20/02/2025", "Dhaka to Riyad");

  // create a flight
  Flight *flight = new FrequentFlyer("Iftekhar", 23, bt, "Bangladesh", 10);

  flight->showFlightDetails();
  return 0;
}