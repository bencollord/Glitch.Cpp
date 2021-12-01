#include "StringBuffer.h"

namespace Glitch
{
	StringBuffer::StringBuffer()
	{
		this->cap = 200;
		this->len = 0;
		this->buf = new char[this->cap];
	}

	StringBuffer::StringBuffer(std::string)
	{
	}

	StringBuffer::StringBuffer(char*)
	{
	}

	StringBuffer::StringBuffer(size_t capacity)
	{
		this->cap = capacity;
		this->len = 0;
		this->buf = new char[this->cap];
	}

	StringBuffer::~StringBuffer()
	{
	}

	size_t StringBuffer::length()
	{
		return this->len;
	}

	size_t StringBuffer::capacity()
	{
		return this->cap;
	}
	StringBuffer& StringBuffer::capacity(size_t)
	{
		// TODO: insert return statement here
	}
	StringBuffer& StringBuffer::append(char)
	{
		// TODO: insert return statement here
	}
	StringBuffer& StringBuffer::append(char*)
	{
		// TODO: insert return statement here
	}
	StringBuffer& StringBuffer::append(std::string)
	{
		// TODO: insert return statement here
	}
	StringBuffer& StringBuffer::appendLine()
	{
		// TODO: insert return statement here
	}
	StringBuffer& StringBuffer::appendLine(std::string)
	{
		// TODO: insert return statement here
	}
	StringBuffer& StringBuffer::clear()
	{
		// TODO: insert return statement here
	}
	std::string StringBuffer::toString()
	{
		return std::string();
	}
}