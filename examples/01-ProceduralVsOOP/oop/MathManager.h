#ifndef MATHMANAGER_H
#define MATHMANAGER_H

#include <vector>
#include <iostream>

class MathManager
{
public:
	MathManager(int size);
	int max() const;
	int sum() const;
	double average() const;
	void readNumbers();
	friend std::ostream& operator<<(std::ostream& os, const MathManager& mgr);

private:
	int m_size;
	std::vector<int> m_numbers;
};

#endif