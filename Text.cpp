#include "Text.h"

namespace Glitch
{
	std::ostream& operator<<(std::ostream& stream, Stringable& stringable)
	{
		return stream << stringable.toString();
	}
}