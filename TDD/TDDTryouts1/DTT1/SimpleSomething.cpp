#include "SimpleSomething.h"


SimpleSomething::SimpleSomething()
{
}


SimpleSomething::~SimpleSomething()
{
}

std::string SimpleSomething::Encode(const std::string & toEncode, const char & toReplace, const char & by)
{
  std::string encoded(toEncode);
  for (auto it = encoded.begin(); it != encoded.end(); ++it){
    if (*it == toReplace){
      *it = by;
    }
  }
  return encoded;
}

int SimpleSomething::DecodeLetter(const char & letter)
{
  return 0;
}
