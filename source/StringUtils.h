
// StringUtils.h

// Interfaces to various string helper functions




#ifndef STRINGUTILS_H_INCLUDED
#define STRINGUTILS_H_INCLUDED





typedef std::string AString;
typedef std::vector<AString> AStringVector;
typedef std::list<AString>   AStringList;





/// Add the formated string to the existing data in the string
extern AString & AppendVPrintf(AString & str, const char * format, va_list args);

/// Output the formatted text into the string
extern AString & Printf       (AString & str, const char * format, ...);

/// Output the formatted text into string, return string by value
extern AString Printf(const char * format, ...);

/// Add the formatted string to the existing data in the string
extern AString & AppendPrintf (AString & str, const char * format, ...);

/// Split the string at any of the listed delimiters, return as a stringvector
extern AStringVector StringSplit(const AString & str, const AString & delim);

/// Split the string at any of the listed delimiters and trim each value, return as a stringvector
extern AStringVector StringSplitAndTrim(const AString & str, const AString & delim);

/// Trime whitespace at both ends of the string
extern AString TrimString(const AString & str);  // tolua_export

/// In-place string conversion to uppercase; returns the same string
extern AString & StrToUpper(AString & s);

/// Case-insensitive string comparison; returns 0 if the strings are the same
extern int NoCaseCompare(const AString & s1, const AString & s2);  // tolua_export

/// Case-insensitive string comparison that returns a rating of equal-ness between [0 - s1.length()]
extern unsigned int RateCompareString(const AString & s1, const AString & s2 );

/// Replaces *each* occurence of iNeedle in iHayStack with iReplaceWith
extern void ReplaceString(AString & iHayStack, const AString & iNeedle, const AString & iReplaceWith);  // tolua_export

/// Returns the list of all items in the specified directory (files, folders, nix pipes, whatever's there)
extern AStringList GetDirectoryContents(const char * a_Directory);

/// Converts a stream of BE shorts into UTF-8 string; returns a ref to a_UTF8
extern AString & RawBEToUTF8(short * a_RawData, int a_NumShorts, AString & a_UTF8);

/// Converts a UTF-8 string into a UTF-16 BE string, packing that back into AString; return a ref to a_UTF16
extern AString & UTF8ToRawBEUTF16(const char * a_UTF8, size_t a_UTF8Length, AString & a_UTF16);

/// Creates a nicely formatted HEX dump of the given memory block. Max a_BytesPerLine is 120
extern AString & CreateHexDump(AString & a_Out, const void * a_Data, int a_Size, int a_BytesPerLine);

/// Returns a copy of a_Message with all quotes and backslashes escaped by a backslash
extern AString EscapeString(const AString & a_Message);  // tolua_export

/// Removes all control codes used by MC for colors and styles
extern AString StripColorCodes(const AString & a_Message);  // tolua_export

// If you have any other string helper functions, declare them here




#endif		// STRINGUTILS_H_INCLUDED




