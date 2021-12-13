#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class portfolio
{
private:
	int year;
	string artist;
	string desc;
	string title;
	string medium;
	string framing;
	bool figur;
public:
	portfolio();
	portfolio(int y, string a, string d, string t, string m, string fr, bool fi);
	void printPortfolio();
	void setYear(int y);
	void setDesc(string d);
	void setTitle(string t);
	void setMedium(string m);
	void setFraming(string fr);
	void setFigurative(bool fi);
	int getYear();
	string getDesc();
	string getTitle();
	string getMedium();
	string getFraming();
	bool getFigurative();
};

