#ifndef ENCODINGSTANDARD_H
#define ENCODINGSTANDARD_H

class EncodingStandard
{
public:
  virtual ~EncodingStandard();

  virtual const char & GetCharacter(const int & numericalExpression) = 0;

protected:
  EncodingStandard();
};

#endif