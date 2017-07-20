#include <vector>
#include <string>

#include "../../../utilities/FileReader.h"
#include "../../../utilities/FileWriter.h"

void readFile(const string & file, vector<string> & v);
void writeFile(const string & file, const vector<string> & v);
void split(const vector<string> & deck,
		   vector<string> & half1,
		   vector<string> & half2);
void shuffle(const vector<string> & half1,
			 const vector<string> & half2,
		 	 vector<string> & deck);

int main()
{
	vector<string> firstHalf;
	vector<string> secondHalf;
	vector<string> deck;

	readFile("Deck.txt", deck);

	for (int i = 0; i < 100; i++)
	{
		split(deck, firstHalf, secondHalf);
		shuffle(firstHalf, secondHalf, deck);
	}

	writeFile("ShuffledDeck.txt", deck);
}

void split(const vector<string> & deck,
		   vector<string> & half1,
		   vector<string> & half2)
 {
	 half1.clear();
	 half2.clear();
	 for (int i = 0; i < deck.size()/2; i++)
	 {
		 half1.push_back(deck[i]);
		 half2.push_back(deck[i+(deck.size()/2)]);
	 }
	 if (half1.size() != half2.size())
	   throw "Halves must be equal size";
 }

void shuffle(const vector<string> & half1,
			 const vector<string> & half2,
		 	 vector<string> & deck)
 {
	 deck.clear();
	 if (half1.size() != half2.size())
	 	throw "Halves must be equal size";
     for (int i = 0; i < half1.size(); i++)
	 {
		 deck.push_back(half1[i]);
		 deck.push_back(half2[i]);
	 }
 }

void readFile(const string & file, vector<string> & v)
{
	FileReader in(file);
	while (in.next())
	{
		string card = in.readString();
		v.push_back(card);
	}
}
void writeFile(const string & file, const vector<string> & v)
{
	FileWriter outFile(file);
	vector<string>::const_iterator start = v.begin();
	vector<string>::const_iterator end = v.end();
	for (vector<string>::const_iterator it = start; it != end; it++)
		outFile.writeLine(*it);
	outFile.close();
}
