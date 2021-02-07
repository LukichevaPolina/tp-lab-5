#include "Students.h"

// Copyright 2020 Polina Lukicheva

Student::Student(int id, std::string fio)
{
  this->fio = fio;
  this->id = id;
  this->marks = std::vector<int>();
}

Student::~Student()
{
}

void Student::add2Group(Group* group)
{
  this->group = group;
}

int Student::getId()
{
  return id;
}

std::string Student::getFio()
{
  return fio;
}

void Student::addmark(int mark)
{
  this->marks.push_back(mark);
}

double Student::averageMark()
{
  double mean = 0;
  for (auto i : marks)
    mean += i;
  return (mean / marks.size());
}

bool Student::isHeadOfGroup()
{ 
  return (group->getHead() == this);
}


