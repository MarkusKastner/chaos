#ifndef CODETABLEENTRY_H
#define CODETABLEENTRY_H

#include <string>

class CodeTableEntry
{
public:
  explicit CodeTableEntry(const unsigned int & numericalExpression, const char & letter, const std::string & name);
  ~CodeTableEntry();

  const unsigned int & GetNumericalExpression() const;
  const char & GetLetter() const;
  const std::string & GetName() const;

private:
  unsigned int numericalExpression;
  char letter;
  std::string name;
};

#endif