#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

# include <string>
# include <iostream>

enum e_level {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	INVALID
};

class Harl {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif