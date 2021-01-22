#include <iostream>
#define INT long long int
using namespace std;

class Doctor
{
    INT doctorID;
    string nameDr;
    INT phoneNumber;
    string department[10];
    string emailAddress;
    string gender;
    int age;
    string address;

public:
    /**
     * Parameterised constructor for the class Reception
     * */
    Doctor(INT doctorID, string nameDr, INT phoneNumber,
              string emailAddress, string gender, int age, string address)
    {
        this->doctorID = doctorID;
        this->nameDr = nameDr;
        this->phoneNumber = phoneNumber;
        this->emailAddress = emailAddress;
        this->gender = gender;
        this->age = age;
        this->address = address;
    }
};
class Reception
{
    INT receptionID;
    string name;
    INT phoneNumber;
    string emailAddress;
    string gender;
    int age;
    string address;

public:
    /**
     * Parameterised constructor for the class Reception
     * */
    Reception(INT receptionID, string name, INT phoneNumber,
              string emailAddress, string gender, int age, string address)
    {
        this->receptionID = receptionID;
        this->name = name;
        this->phoneNumber = phoneNumber;
        this->emailAddress = emailAddress;
        this->gender = gender;
        this->age = age;
        this->address = address;
    }
};