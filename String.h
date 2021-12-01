#pragma once

#include <vector>

namespace Glitch
{
	class String
	{
		char* str;
		size_t len;

		public:
			String(char*);
			String(char, size_t);
			String(const String&);

			~String();

			std::vector<String> split(char);
			std::vector<String> split(String);
			int indexOf(char);
			int lastIndexOf(char);
			bool contains(char);
			const size_t length();

			String operator+(const String&);
			bool operator==(const String&);
			bool operator!=(const String&);
			char& operator[](size_t);

		private:
			std::vector<String> split(char*);
	};
}