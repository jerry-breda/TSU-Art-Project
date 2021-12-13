#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>
#include "portfolio.h"
using namespace std;


void printPortf(int number, list<portfolio>);

int main() {
	const int N = 9;
	//declaring artists names & amount of portfolio obj
	string artists[N] = { "Kingsley Onyeiwu", "Tony McMillian", "Rickey De Paul Donato", "John T. Biggers", "Joshua Arthur Ghandi", "Moses Adams Jr.", "Brittany Torres", "Richard Lee Williams aka 'Sunnyside'", "Tarmarick Williams" };
	portfolio kingsley[2], tony[2], rickey[3], john, joshua, moses, brittany, richard[2], tarmarick;

	//initializing portfolios
	tarmarick = { portfolio(2019, artists[8], "A group of African people watching a ritual", "Mpaee", "Chalk pastel", "Wooden", false) };
	richard[0] = { portfolio(2021, artists[7], "Different birds with eyes viewing different direction", "Birds Eye View", "oil on paper", "Wooden", true) }; //1
	richard[1] = { portfolio(2021, artists[7], "Babies in the clouds and human holding a ball", "In the Beginning", "oil on paper", "Wooden", true) };
	brittany = { portfolio(2018, artists[6], "A black woman sitting on a wooden box holding a cup looking in a different direction", "Sitting", "Pastel on paper", "Metallic", true) };
	moses = { portfolio(2019, artists[5], "They have slave boats, slave auction, civil war, emancipation proclamation give slaves to have a free life, house of bill of 1978 housing act, general order of slaves being free, Frederick Douglass, Harriet Tubman", "From Slavery to Freedom Are We There Yet", "Acrylic on paper", "Wooden", false) };
	joshua = { portfolio(2018, artists[4], "Colorful background Thanos with infinity stones", "It must change", "Mixed media on wood, color pencil, tattoo ink and prismacolor markers on canvas", "No frame", false) };
	john = { portfolio(1959, artists[3], "The four seasons while also depicting the passages of human life from birth to death", "Web of Life", "Oil and tempro on canvas", "Wooden", false) };
	rickey[0] = { portfolio(1995, artists[2], "A black woman smiling with plants in the back", "An Outlaw Artist", "Oil and acrylic paper", "Wooden", true) };
	rickey[1] = { portfolio(1998, artists[2], "A mayor from Houston with buildings, with city of houston with train on the background", "Mayor Lee Brown", "Oil on acrylic paper", "Metallic", false) };
	rickey[2] = { portfolio(1998, artists[2], "3 black men playing instruments", "Zydeco Jammin", "Acrylic on paper", "Wooden", false) };
	tony[0]= { portfolio(2015, artists[1], "Black men killed, hung from the tree, killed by a cop, arrest by police", "His Story Repeating Itself", "Pencil and acrylic on canvas", "No frame", false) };
	tony[1]= { portfolio(2015, artists[1], "Little boy standing in the street in front of houses and construction worker equipment", "Homeless", "Pencil and acrylic on canvas", "No frame", true) };
	kingsley[0] = { portfolio(2020, artists[0], "A naked black woman", "Figure Study with Colors", "Pastel on paper", "Plastic", true) };
	kingsley[1] = { portfolio(2015, artists[0], "Wolf eye with a black woman who looks like a warrior", "Figure Study", "Charcoal on paper", "Wooden", true) };//13
	
	list<portfolio> pList;
	pList.push_back(kingsley[0]);
	pList.push_back(kingsley[1]);
	pList.push_back(tony[0]);
	pList.push_back(tony[1]);
	pList.push_back(rickey[0]);
	pList.push_back(rickey[1]);
	pList.push_back(rickey[2]);
	pList.push_back(john);
	pList.push_back(joshua);
	pList.push_back(moses);
	pList.push_back(brittany);
	pList.push_back(richard[0]);
	pList.push_back(richard[1]);
	pList.push_back(tarmarick);
	
//**************************************************************************************************************************************************************************************************************************************************************************************************************************************************************

	int number;
	bool answer;

	for (int i = 0; i <= 8; i++) {
		cout << "[" << (i + 1) << "]: " << artists[i] << endl;
	}
	cout << "Please enter the number of the artist portolio you would like to see from above!" << endl;
	cin >> number;
	number -= 1;
	try {
		if (number >= 1 || number <= 9) {
			cout << "So you want to see " << artists[number] << "'s painting? (1 for yes / 0 for no)\n";
			cin >> answer;
			if (answer == true) {
				//print list associated with artist requested
				cout << "Okay here are " << artists[number] << "'s paintings!" << endl;
				if (number == 1)
					number = 0;
				printPortf(number, pList);
			}
			else {
				cout << "Please enter the artist you wish to observe below " << endl;
				cin >> number;
				if (number == 1)
					number = 0;
				if (number < 1 || number > 9)
					exit(1);
				else {
					cout << "Okay here is " << artists[number] << "'s artwork!\n";
					number -= 1;
					printPortf(number, pList);
				}
			}
		}
		else if (number < 1 || number > 9)
			throw number;
	}
	catch (int number) {
		cout << "The number you entered is not a valid number, please try again below...\n";
		cin >> number;
		if (number > 1 && number < 9) {
			cout << "Now that your done playing, here is what you were looking for...\n";
			number -= 1;
			printPortf(number, pList);
		}
		else {
			cout << "EXITING PROGRAM...\n";
			exit(EXIT_FAILURE);
		}
	}
}

void printPortf(int number, list<portfolio> l)
{
	
	list<portfolio>::iterator it = l.begin();
	
	switch (number) {
	case 0:
		//position 1 in list
		it->printPortfolio();
		advance(it, 1);
		//position 2 in list
		it->printPortfolio();
		break;
	case 1:
		// position 3 in list
		advance(it, 2);
		it->printPortfolio();
		advance(it, 1);
		//position 4 in list
		it->printPortfolio();
		break;
	case 2:
		advance(it, 4);
		//position 5 in list
		it->printPortfolio();
		advance(it, 1);
		//position 6 in list
		it->printPortfolio();
		advance(it, 1);
		//position 7 in list
		it->printPortfolio();
		break;
	case 3:
		advance(it, 7);
		it->printPortfolio();
		break;
	case 4:
		advance(it, 8);
		it->printPortfolio();
		break;
	case 5:
		advance(it, 9);
		it->printPortfolio();
		break;
	case 6:
		advance(it, 10);
		it->printPortfolio();
		break;
	case 7:
		advance(it, 11);
		it->printPortfolio();
		advance(it, 1);
		it->printPortfolio();
		break;
	case 8:
		advance(it, 13);
		it->printPortfolio();
		break;
	default:
		exit(EXIT_FAILURE);
	}
}
