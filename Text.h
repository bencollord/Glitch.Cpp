#pragma once
#include <string>
#include <iostream>

namespace Glitch
{
	class Stringable
	{
		public:
			virtual std::string toString() = 0;

		private:
			friend std::ostream& operator<<(std::ostream&, Stringable&);
	};
}

