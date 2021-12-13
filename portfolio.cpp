#include <iostream>
#include "portfolio.h"
using namespace std;

portfolio::portfolio() {
	year = 0;
	artist = "";
	desc = "";
	title = "";
	medium = "";
	framing = "";
	figur = "";
}

portfolio::portfolio(int y, string a, string d, string t, string m, string fr, bool fi)
{
	year = y;
	artist = a;
	desc = d;
	title = t;
	medium = m;
	framing = fr;
	figur = fi;
}

void portfolio::printPortfolio() {
	cout << "The year this painting was finished is: " << year << endl;
	cout << "The title of the painting: " << title << endl;
	cout << "The medium used for this painting is: " << medium << endl;
	cout << "Frame used: " << framing << endl;
	if (figur == true) {
		cout << "The painting is supposed to be figurative" << endl;
	}

	bool yes;
	cout << "Do you want a description of the painting? (Enter 1 for yes, or 0 for no)" << endl;
	cin >> yes;
	if (yes == 1)
		cout << desc << endl;
	else if (yes == 0)
		cout << endl;
	else
		cout << endl;
}

void portfolio::setYear(int y) {
	year = y;
}

void portfolio::setDesc(string d) {
	desc = d;
}

void portfolio::setTitle(string t) {
	title = t;
}

void portfolio::setMedium(string m) {
	medium = m;
}

void portfolio::setFraming(string fr) {
	framing = fr;
}

void portfolio::setFigurative(bool fi) {
	figur = fi;
}

int portfolio::getYear() {
	return year;
}

string portfolio::getDesc() {
	return desc;
}

string portfolio::getTitle() {
	return title;
}

string portfolio::getMedium() {
	return medium;
}

string portfolio::getFraming() {
	return framing;
}

bool portfolio::getFigurative() {
	return figur;
}