#include "stdafx.h"
#include "CppUnitTest.h"

#include <memory>

#include "..\DTT1\SimpleSomething.h"
#include "..\DTT1\CodeTableEntry.h"
#include "..\DTT1\EncodingStandard.h"
#include "..\DTT1\EncodingStandardISO_8859_1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(SimpleSomethingEncode)
		{
      Assert::AreEqual(SimpleSomething::Encode("simple encoding", 's', 'S'), std::string("Simple encoding"));
		}

    TEST_METHOD(ISO_8859_1_toIint)
    {
      Assert::AreEqual(SimpleSomething::DecodeLetter('a'), 97);
    }

    TEST_METHOD(CodeTabEntry)
    {
      CodeTableEntry codeTableEntry(97, 'a', "a");
      Assert::AreEqual(codeTableEntry.GetNumericalExpression(), (const unsigned int)97);
      Assert::AreEqual(codeTableEntry.GetLetter(), 'a');
      Assert::AreEqual(codeTableEntry.GetName(), std::string("a"));
    }

    TEST_METHOD(CodingStandard_ISO88591_get_character)
    {
      std::unique_ptr<EncodingStandard>encodingStandard(new EncodingStandardISO_8859_1());
      Assert::AreEqual(encodingStandard->GetCharacter(97), (const char)'a');
    }

    TEST_METHOD(CodingStandard_ISO88591_invalid_number)
    {
      std::unique_ptr<EncodingStandard>encodingStandard(new EncodingStandardISO_8859_1());
      auto funcPtr = [&encodingStandard]{ encodingStandard->GetCharacter(1); };
      Assert::ExpectException<std::exception>(funcPtr);
    }
	};
}