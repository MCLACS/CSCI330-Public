#include "../utilities/FileReader.h"
#include "../utilities/helper.h"
#include "main.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
	vector<Reviewer> r;
	readFile(r);
	print(r);
}

void readFile(vector<Reviewer> & reviews)
{
	FileReader in("reviews.txt");
	while (in.next())
	{
		string line = in.readString();
		vector<string> tokens = split(line, ',');
		string name = trim(tokens[0]);
		string movie = trim(tokens[1]);
		int stars = atoi(tokens[2].c_str());

		Review review;
		review.movie = movie;
		review.stars = stars;

		Reviewer reviewer;
		reviewer.name = name;
		reviewer.reviews.push_back(review);
		addReview(reviewer, review, reviews);
	}
}

void addReview(const Reviewer & reviewer, const Review & review,
	vector<Reviewer> & reviews)
{
	bool found = false;
	vector<Reviewer>::iterator start = reviews.begin();
	vector<Reviewer>::iterator end = reviews.end();
	for (vector<Reviewer>::iterator p = start; p != end; p++)
	{
		if ((*p).name == reviewer.name)
		{
			(*p).reviews.push_back(review);
			found = true;
			break;
		}
	}

	if (!found)
		reviews.push_back(reviewer);
}

void print(const vector<Reviewer> & reviewers)
{
	vector<Reviewer>::const_iterator start1 = reviewers.begin();
	vector<Reviewer>::const_iterator end1 = reviewers.end();
	for (vector<Reviewer>::const_iterator p1 = start1; p1 != end1; p1++)
	{
		cout << (*p1).name << endl;
		vector<Review>::const_iterator start2 = (*p1).reviews.begin();
		vector<Review>::const_iterator end2 = (*p1).reviews.end();
		for (vector<Review>::const_iterator p2 = start2; p2 != end2; p2++)
		{
			cout << "\t" << (*p2).movie << " " << (*p2).stars
				<< " stars." << endl;
		}

	}
}
