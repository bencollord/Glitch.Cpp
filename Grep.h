#pragma once

#include <string>
#include "Text.h"

namespace Glitch
{
	class GrepMatch : public Stringable
	{
		std::string txt;
		unsigned int ln;

		public:
			GrepMatch(std::string, unsigned int);
			std::string text();
			unsigned int line();
			std::string toString();
	};
}