#include <iostream>
#include <string>
#include "nlohmann/json.hpp"

using json = nlohmann::json;

using namespace std;

class Address
{
    public:
        string Street;
        string City;
        string Country;
        string PostalCode;
        
        Address();
        Address(string street, string city, string country, string postalcode);
        Address(const Address& other);

        Address& operator=(const Address& other);

        friend ostream& operator<<(ostream& out, const Address& data){
            out << "Street: " << data.Street.c_str() << endl;
            out << "City: " << data.City.c_str() << endl;
            out << "Country: " << data.Country.c_str() << endl;
            out << "PostalCode: " << data.PostalCode.c_str() << endl;
            return out; 
        }
        
        // Convert the object to a formated string
        string toString();
        // Converte the object to a JSON
        json toJson();

};