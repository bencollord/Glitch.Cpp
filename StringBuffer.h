#pragma once
#include "String.h"

namespace Glitch
{
	class StringBuffer
	{
		char* buf;
		size_t len;
		size_t cap;

		public:
			StringBuffer();
			StringBuffer(String);
			StringBuffer(char*);
			StringBuffer(size_t);

			~StringBuffer();

			size_t length();
			size_t capacity();
			StringBuffer& capacity(size_t);

			StringBuffer& append(char*);
			StringBuffer& append(String);
			StringBuffer& appendLine();
			StringBuffer& appendLine(String);
			StringBuffer& clear();
			String toString();
	};
}

