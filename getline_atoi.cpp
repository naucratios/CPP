#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){
	string name;
	string s;
	int age;
	cout<<"Hello dude...whats your name;\n";
	getline(cin, name);
	cout<<"What's your age man?\n";
	getline(cin, s);
	age=atoi(s.c_str());
	cout<<"Your name is "<<name<<"and you are "<<age<<" years old\n";
	return 0;
}

