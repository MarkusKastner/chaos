#ifndef ENCODINGSTANDARDISO_8859_1_H
#define ENCODINGSTANDARDISO_8859_1_H

#include <vector>

#include "EncodingStandard.h"
#include "CodeTableEntry.h"

class EncodingStandardISO_8859_1 : public EncodingStandard
{
public:
  EncodingStandardISO_8859_1();
  virtual ~EncodingStandardISO_8859_1();
  
  virtual const char & GetCharacter(const int & numericalExpression);

private:
  std::vector<CodeTableEntry> codeTable;
  void setup();
};

#endif