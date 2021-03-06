#include <iostream>
#include <string>
#include "common/address.h"

using namespace std;

class UserProfile
{
    public:
        string Name;
        int Age;
        Address UserAddress;
        size_t Id;

        UserProfile();
        UserProfile(string name, int age, const Address& UserAddress, size_t id);
        UserProfile(string name, int agege, string Street, string City, string Country, string PostalCode, size_t id);
        UserProfile(const UserProfile& other);

        // Function that will simply add 1 to the user's age
        string BirthDay();

        UserProfile& operator=(const UserProfile& other);

        friend ostream& operator<<(ostream& out, const UserProfile& data){
            out << "Id: " << data.Id << endl;
            out << "Name: " << data.Name.c_str() << endl;
            out << "Age: " << data.Age << endl;
            out << "Address: " << endl;
            out << data.UserAddress << endl;
            return out; 
        }

        // Returns the object as a formated string
        string toString();

        // Returns the object as a JSON
        json toJson();
        // Converts a JSON to the object
        UserProfile UserProfile::FromJson(const json & value);

};