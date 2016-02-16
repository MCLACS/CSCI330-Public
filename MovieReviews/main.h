#ifndef MAIN_H
#define MAIN_H

#include <vector>
#include <string>

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

void readFile(vector<Reviewer> & reviews);
void addReview(const Reviewer & reviewer, const Review & review,
	vector<Reviewer> & reviews);
void print(const vector<Reviewer> & reviewers);

#endif
