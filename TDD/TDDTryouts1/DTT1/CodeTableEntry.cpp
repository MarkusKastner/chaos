#include "CodeTableEntry.h"


CodeTableEntry::CodeTableEntry(const unsigned int & numericalExpression, const char & letter, const std::string & name)
: numericalExpression(numericalExpression), letter(letter), name(name)
{

}

CodeTableEntry::~CodeTableEntry()
{

}

const unsigned int & CodeTableEntry::GetNumericalExpression() const
{
  return this->numericalExpression;
}

const char & CodeTableEntry::GetLetter() const
{
  return this->letter;
}

const std::string & CodeTableEntry::GetName() const
{
  return this->name;
}
