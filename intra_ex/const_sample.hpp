#ifndef CONST_SAMPLE_HPP
#define CONST_SAMPLE_HPP

#include <iostream>

class Sample
{
	public:

	float const pi;
	int			qd;

	Sample(float const f);
	~Sample(void);

	void	bar(void) const;

};

#endif