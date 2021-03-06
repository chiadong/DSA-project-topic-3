#pragma once
#include<string>
#include<vector>

class Student {
private:
	double m_GPA;
	std::vector<std::string> m_choices;
	std::string m_name;
public:

	Student(std::string name, double GPA, std::vector<std::string> choices);	
	double getGPA() const; //return Student GPA	
	const std::string& getName() const; //return the name of Student	
	const std::string& getChoice(int i) const; //return the Sector that Student chose
};
