#include "Grep.h"

namespace Glitch
{
	GrepMatch::GrepMatch(std::string text, unsigned int line)
	{
		txt = text;
		ln = line;
	}

	std::string GrepMatch::text()
	{
		return txt;
	}

	unsigned int GrepMatch::line()
	{
		return ln;
	}

	std::string GrepMatch::toString()
	{
		return std::string();
	}
}