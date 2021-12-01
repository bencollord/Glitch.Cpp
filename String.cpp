#include "String.h"
#include <vector>

namespace Glitch
{
	using namespace std;

	String::String(char* str)
	{
		this->str = str;
		this->len = strlen(str);
	}

	String::String(char c, size_t length)
	{
		const size_t l = length;

		this->str = new char[length + 1];

		for (size_t i = 0; i < length; ++i)
		{
			this->str[i] = c;
		}

		this->str[length] = '\0';
		this->len = length;
	}

	String::String(const String& other)
	{
		this->len = other.len;
		this->str = new char[other.len];

		strcpy(this->str, other.str);
	}

	String::~String()
	{
		delete this->str;
	}

	vector<String> String::split(char delimiter)
	{
		return split(&delimiter);
	}

	vector<String> String::split(String delimiter)
	{
		return split(delimiter.str);
	}

	vector<String> String::split(char* delimiter)
	{
		vector<String> result;

		char* token = strtok(this->str, delimiter);

		while (token != NULL)
		{
			result.push_back(String(token));
			token = strtok(NULL, delimiter);
		}

		return result;
	}

	int String::indexOf(char c)
	{
		char* found = strchr(this->str, c);

		if (found == nullptr)
		{
			return -1;
		}

		return found - this->str;
	}

	int String::lastIndexOf(char c)
	{
		char* found = strrchr(this->str, c);

		if (found == nullptr)
		{
			return -1;
		}

		return found - this->str;
	}

	bool String::contains(char c)
	{
		return indexOf(c) > -1;
	}

	const size_t String::length()
	{
		return this->len;
	}

	String String::operator+(const String& other)
	{
		char* result = strcat(this->str, other.str);

		return String(result);
	}

	bool String::operator==(const String& other)
	{
		return strcmp(this->str, other.str) == 0;
	}

	bool String::operator!=(const String& other)
	{
		return strcmp(this->str, other.str) != 0;
	}

	char& String::operator[](size_t index)
	{
		if (index >= length())
		{
			// TODO Throw error
		}

		return this->str[index];
	}
}