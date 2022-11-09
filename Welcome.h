#ifndef WELCOME_H
#define WELCOME_H

#include <iostream>
#include"Menu.h"
#include<string>
using namespace std;

class Acquaintance 
{
protected:
	string username;
	string usersurname;
public:
	Acquaintance() {}
	Acquaintance(string u_name, string u_surname) {
		username = u_name;
		usersurname = u_surname;
	}
	~Acquaintance(){}
	friend ostream& operator<< (ostream& os, Acquaintance& s) {
		os << s.username << " " << s.usersurname << " " << "Welcome to logistics company!";
		return os;
	}
	friend istream& operator>> (istream& is, Acquaintance& s) {
		cout << "What is your name?\n";
		is >> s.username >> s.usersurname;
		return is;
	}

	
};

#endif