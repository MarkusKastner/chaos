#ifndef SIMPLESOMETHING_H
#define SIMPLESOMETHING_H

#include <string>

class SimpleSomething
{
public:
  SimpleSomething();
  ~SimpleSomething();

  static std::string Encode(const std::string & toEncode, const char & toReplace, const char & by);
  static int DecodeLetter(const char & letter);
};

#endif