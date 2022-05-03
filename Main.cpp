#include "fg.hpp"

#include <iostream>
#include <iomanip>

#include <ctime>

int main ()
{
	const unsigned n {10'000'000};
	
	const auto p {std::make_shared <float> (3.14159265f)};
	//const auto p {std::shared_ptr <float> {new float {3.14159265f}}};
	
	{
		const std::clock_t t0 {std::clock ()};
		for (unsigned i = 0; i < n; ++i)
			f (p);
		const std::clock_t dt {std::clock () - t0};
		std::cout << "Time elapsed by f: " << std::setw (10) << dt << ".\n";
	}
	
	{
		const std::clock_t t0 {std::clock ()};
		for (unsigned i = 0; i < n; ++i)
			g (p);
		const std::clock_t dt {std::clock () - t0};
		std::cout << "Time elapsed by g: " << std::setw (10) << dt << ".\n";
	}
}
