#include "../includes/Brain.hpp"

Brain::Brain( void ) {}

Brain::Brain( const Brain &prev )
{
	if (this != &prev)
	{
		for (int i = 0; i < 100; i++)
		{
			if (_ideas[i])
				delete _ideas[i];
			_ideas[i] == prev._ideas[i] ? new std::string(*prev._ideas[i]) : nullptr;
		}
	}
}

Brain	&Brain::operator=( const Brain &right )
{
	if (this != &right)
	{
		for (int i = 0; i < 100; i++)
		{
			if (_ideas[i])
				delete _ideas[i];
			_ideas[i] == right._ideas[i] ? new std::string(*right._ideas[i]) : nullptr;
		}
	}
	return *this;
}

Brain::~Brain( void ) {}