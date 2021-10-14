#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{

public:
	Karen();
	~Karen();
	void complain( std::string level );

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void	(Karen::*f[4])();
	std::string levels[4];
};


#endif
