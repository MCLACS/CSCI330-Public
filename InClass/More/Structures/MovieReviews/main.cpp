#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

#include "../../../utilities/FileReader.h"
#include "../../../utilities/helper.h"
#include "main.h"

using namespace std;

int main()
{
	vector<Reviewer> reviewers;
	readFile(reviewers);
	print(reviewers);
}

void readFile(vector<Reviewer> & reviewers)
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
		addReview(reviewer, review, reviewers);
	}
}

void addReview(Reviewer & reviewer, const Review & review,
	vector<Reviewer> & reviewers)
{
	bool found = false;
	for (vector<Reviewer>::iterator p = reviewers.begin(); p != reviewers.end(); p++)
	{
		if ((*p).name == reviewer.name)
		{
			(*p).reviews.push_back(review);
			found = true;
			break;
		}
	}

	if (!found)
	{
		reviewer.reviews.push_back(review);
		reviewers.push_back(reviewer);
	}
}

void print(const vector<Reviewer> & reviewers)
{
	for (vector<Reviewer>::const_iterator p1 = reviewers.begin(); p1 != reviewers.end(); p1++)
	{
		cout << (*p1).name << endl;
		for (vector<Review>::const_iterator p2 = (*p1).reviews.begin(); p2 != (*p1).reviews.end(); p2++)
		{
			cout << "\t" << (*p2).movie << " " << (*p2).stars
				<< " stars." << endl;
		}

	}
}
