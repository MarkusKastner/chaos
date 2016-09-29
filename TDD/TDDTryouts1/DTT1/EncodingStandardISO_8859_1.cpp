#include "EncodingStandardISO_8859_1.h"

EncodingStandardISO_8859_1::EncodingStandardISO_8859_1()
: EncodingStandard(), codeTable()
{
  this->setup();
}

EncodingStandardISO_8859_1::~EncodingStandardISO_8859_1()
{

}

const char & EncodingStandardISO_8859_1::GetCharacter(const int & numericalExpression)
{
  for (auto it = this->codeTable.begin(); it != this->codeTable.end(); ++it){
    if (it->GetNumericalExpression() == numericalExpression){
      return it->GetLetter();
    }
  }
  throw std::exception("Invalid number");
}

void EncodingStandardISO_8859_1::setup()
{
  this->codeTable.push_back(CodeTableEntry(32, ' ', "space"));
  this->codeTable.push_back(CodeTableEntry(33, '!', "exclamation mark"));
  this->codeTable.push_back(CodeTableEntry(34, '"', "quotation mark"));
  this->codeTable.push_back(CodeTableEntry(35, '#', "sharp"));
  this->codeTable.push_back(CodeTableEntry(36, '$', "dollar"));
  this->codeTable.push_back(CodeTableEntry(37, '%', "percent"));
  this->codeTable.push_back(CodeTableEntry(38, '&', "amp"));
  this->codeTable.push_back(CodeTableEntry(39, '\'', "apostrophe"));
  this->codeTable.push_back(CodeTableEntry(40, '(', "left parenthesis"));
  this->codeTable.push_back(CodeTableEntry(41, ')', "right parenthesis"));
  this->codeTable.push_back(CodeTableEntry(42, '*', "asterisk"));
  this->codeTable.push_back(CodeTableEntry(43, '+', "plus"));
  this->codeTable.push_back(CodeTableEntry(44, ',', "comma"));
  this->codeTable.push_back(CodeTableEntry(45, '-', "minus"));
  this->codeTable.push_back(CodeTableEntry(46, '.', "full stop"));
  this->codeTable.push_back(CodeTableEntry(47, '/', "slash"));
  this->codeTable.push_back(CodeTableEntry(48, '0', "digit zero"));
  this->codeTable.push_back(CodeTableEntry(49, '1', "digit one"));
  this->codeTable.push_back(CodeTableEntry(50, '2', "digit two"));
  this->codeTable.push_back(CodeTableEntry(51, '3', "digit three"));
  this->codeTable.push_back(CodeTableEntry(52, '4', "digit four"));
  this->codeTable.push_back(CodeTableEntry(53, '5', "digit five"));
  this->codeTable.push_back(CodeTableEntry(54, '6', "digit six"));
  this->codeTable.push_back(CodeTableEntry(55, '7', "digit seven"));
  this->codeTable.push_back(CodeTableEntry(56, '8', "digit eight"));
  this->codeTable.push_back(CodeTableEntry(57, '9', "digit nine"));
  this->codeTable.push_back(CodeTableEntry(58, ':', "colon"));
  this->codeTable.push_back(CodeTableEntry(59, ';', "semicolon"));
  this->codeTable.push_back(CodeTableEntry(60, '<', "less"));
  this->codeTable.push_back(CodeTableEntry(61, '=', "equals"));
  this->codeTable.push_back(CodeTableEntry(62, '>', "greater"));
  this->codeTable.push_back(CodeTableEntry(63, '?', "question mark"));
  this->codeTable.push_back(CodeTableEntry(64, '@', "commercial at"));
  this->codeTable.push_back(CodeTableEntry(65, 'A', "letter A"));
  this->codeTable.push_back(CodeTableEntry(66, 'B', "letter B"));
  this->codeTable.push_back(CodeTableEntry(67, 'C', "letter C"));
  this->codeTable.push_back(CodeTableEntry(68, 'D', "letter D"));
  this->codeTable.push_back(CodeTableEntry(69, 'E', "letter E"));
  this->codeTable.push_back(CodeTableEntry(70, 'F', "letter F"));
  this->codeTable.push_back(CodeTableEntry(71, 'G', "letter G"));
  this->codeTable.push_back(CodeTableEntry(72, 'H', "letter H"));
  this->codeTable.push_back(CodeTableEntry(73, 'I', "letter I"));
  this->codeTable.push_back(CodeTableEntry(74, 'J', "letter J"));
  this->codeTable.push_back(CodeTableEntry(75, 'K', "letter K"));
  this->codeTable.push_back(CodeTableEntry(76, 'L', "letter L"));
  this->codeTable.push_back(CodeTableEntry(77, 'M', "letter M"));
  this->codeTable.push_back(CodeTableEntry(78, 'N', "letter N"));
  this->codeTable.push_back(CodeTableEntry(79, 'O', "letter O"));
  this->codeTable.push_back(CodeTableEntry(80, 'P', "letter P"));
  this->codeTable.push_back(CodeTableEntry(81, 'Q', "letter Q"));
  this->codeTable.push_back(CodeTableEntry(82, 'R', "letter R"));
  this->codeTable.push_back(CodeTableEntry(83, 'S', "letter S"));
  this->codeTable.push_back(CodeTableEntry(84, 'T', "letter T"));
  this->codeTable.push_back(CodeTableEntry(85, 'U', "letter U"));
  this->codeTable.push_back(CodeTableEntry(86, 'V', "letter V"));
  this->codeTable.push_back(CodeTableEntry(87, 'W', "letter W"));
  this->codeTable.push_back(CodeTableEntry(88, 'X', "letter X"));
  this->codeTable.push_back(CodeTableEntry(89, 'Y', "letter Y"));
  this->codeTable.push_back(CodeTableEntry(90, 'Z', "letter Z"));
  this->codeTable.push_back(CodeTableEntry(91, '[', "left square bracket"));
  this->codeTable.push_back(CodeTableEntry(92, '\\', "backslash"));
  this->codeTable.push_back(CodeTableEntry(93, ']', "right square bracket"));
  this->codeTable.push_back(CodeTableEntry(94, '^', "circumflex accent"));
  this->codeTable.push_back(CodeTableEntry(95, '_', "low line"));
  this->codeTable.push_back(CodeTableEntry(96, '`', "grave accent"));
  this->codeTable.push_back(CodeTableEntry(97, 'a', "letter a"));
  this->codeTable.push_back(CodeTableEntry(98, 'b', "letter b"));
  this->codeTable.push_back(CodeTableEntry(99, 'c', "letter c"));
  this->codeTable.push_back(CodeTableEntry(100, 'd', "letter d"));
  this->codeTable.push_back(CodeTableEntry(101, 'e', "letter e"));
  this->codeTable.push_back(CodeTableEntry(102, 'f', "letter f"));
  this->codeTable.push_back(CodeTableEntry(103, 'g', "letter g"));
  this->codeTable.push_back(CodeTableEntry(104, 'h', "letter h"));
  this->codeTable.push_back(CodeTableEntry(105, 'i', "letter i"));
  this->codeTable.push_back(CodeTableEntry(106, 'j', "letter j"));
  this->codeTable.push_back(CodeTableEntry(107, 'k', "letter k"));
  this->codeTable.push_back(CodeTableEntry(108, 'l', "letter l"));
  this->codeTable.push_back(CodeTableEntry(109, 'm', "letter m"));
  this->codeTable.push_back(CodeTableEntry(110, 'n', "letter n"));
  this->codeTable.push_back(CodeTableEntry(111, 'o', "letter o"));
  this->codeTable.push_back(CodeTableEntry(112, 'p', "letter p"));
  this->codeTable.push_back(CodeTableEntry(113, 'q', "letter q"));
  this->codeTable.push_back(CodeTableEntry(114, 'r', "letter r"));
  this->codeTable.push_back(CodeTableEntry(115, 's', "letter s"));
  this->codeTable.push_back(CodeTableEntry(116, 't', "letter t"));
  this->codeTable.push_back(CodeTableEntry(117, 'u', "letter u"));
  this->codeTable.push_back(CodeTableEntry(118, 'v', "letter v"));
  this->codeTable.push_back(CodeTableEntry(119, 'w', "letter w"));
  this->codeTable.push_back(CodeTableEntry(120, 'x', "letter x"));
  this->codeTable.push_back(CodeTableEntry(121, 'y', "letter y"));
  this->codeTable.push_back(CodeTableEntry(122, 'z', "letter z"));
  this->codeTable.push_back(CodeTableEntry(123, '{', "left curly bracket"));
  this->codeTable.push_back(CodeTableEntry(124, '|', "vertical line"));
  this->codeTable.push_back(CodeTableEntry(125, '}', "right curly bracket"));
  this->codeTable.push_back(CodeTableEntry(126, '~', "tilde"));

  this->codeTable.push_back(CodeTableEntry(128, '€', "euro"));

  this->codeTable.push_back(CodeTableEntry(130, '‚', "quotation mark"));
  this->codeTable.push_back(CodeTableEntry(131, 'ƒ', "f with hook"));
  this->codeTable.push_back(CodeTableEntry(132, '„', "double quotation mark"));
  this->codeTable.push_back(CodeTableEntry(133, '…', "horizontal ellipsis"));
  this->codeTable.push_back(CodeTableEntry(134, '†', "dagger"));
  this->codeTable.push_back(CodeTableEntry(135, '‡', "double dagger"));
  this->codeTable.push_back(CodeTableEntry(136, 'ˆ', "circumflex accent"));
  this->codeTable.push_back(CodeTableEntry(137, '‰', "per mille sign"));
  this->codeTable.push_back(CodeTableEntry(138, 'Š', "S with caron"));
  this->codeTable.push_back(CodeTableEntry(139, '‹', "single left pointing angle quotation mark"));
  this->codeTable.push_back(CodeTableEntry(140, 'Œ', "ligature OE"));
 
  this->codeTable.push_back(CodeTableEntry(142, 'Ž', "letter Z with caronT"));

  this->codeTable.push_back(CodeTableEntry(145, '‘', "left single quotation mark"));
  this->codeTable.push_back(CodeTableEntry(146, '’', "right single quotation mark"));
  this->codeTable.push_back(CodeTableEntry(147, '“', "left double quotation mark"));
  this->codeTable.push_back(CodeTableEntry(148, '”', "right double quotation mark"));
  this->codeTable.push_back(CodeTableEntry(149, '•', "bullet"));
  this->codeTable.push_back(CodeTableEntry(150, '–', "en dash"));
  this->codeTable.push_back(CodeTableEntry(151, '—', "em dash"));
  this->codeTable.push_back(CodeTableEntry(152, '˜', "small tilde"));
  this->codeTable.push_back(CodeTableEntry(153, '™', "trade mark sign"));
  this->codeTable.push_back(CodeTableEntry(154, 'š', "letter s with caron"));
  this->codeTable.push_back(CodeTableEntry(155, '›', "single right-pointing angle quotation mark"));
  this->codeTable.push_back(CodeTableEntry(156, 'œ', "small ligature oe"));

  this->codeTable.push_back(CodeTableEntry(158, 'ž', "letter z with caron"));
  this->codeTable.push_back(CodeTableEntry(159, 'Ÿ', "letter Y with diaeresis"));
}