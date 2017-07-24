#ifndef MAIN_H
#define MAIN_H

#include <vector>
#include <string>

using namespace std;

struct Review
{
	string movie;
	int stars;
};

struct Reviewer
{
	string name;
	vector<Review> reviews;
};

void readFile(vector<Reviewer> & reviewers);
void addReview(Reviewer & reviewer, const Review & review,
	vector<Reviewer> & reviewers);
void print(const vector<Reviewer> & reviewers);

#endif
