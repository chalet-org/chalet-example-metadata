#include <iostream>

#include <config.h>

int main(const int argc, const char* argv[])
{
	std::cout << "Hello world!\n\n";
	std::cout << "Args:\n";

	for (int i = 0; i < argc; ++i)
	{
		std::cout << "  " << argv[i] << '\n';
	}

	std::cout << '\n';

#if defined(WORKSPACE_VER)
	std::cout << WORKSPACE_NAME << '\n';
	std::cout << WORKSPACE_AUTHOR << '\n';
	std::cout << WORKSPACE_DESCRIPTION << '\n';
	std::cout << WORKSPACE_HOMEPAGE << '\n';
	std::cout << WORKSPACE_LICENSE << '\n';
	std::cout << WORKSPACE_README << '\n';
	std::cout << WORKSPACE_VER << '\n';
	std::cout << WORKSPACE_VER_MAJOR << '.' << WORKSPACE_VER_MINOR << '.' << WORKSPACE_VER_PATCH << '\n';
	std::cout << '\n';
#endif

#if defined(PROJECT_VER)
	std::cout << PROJECT_NAME << '\n';
	std::cout << PROJECT_AUTHOR << '\n';
	std::cout << PROJECT_DESCRIPTION << '\n';
	std::cout << PROJECT_HOMEPAGE << '\n';
	std::cout << PROJECT_LICENSE << '\n';
	std::cout << PROJECT_README << '\n';
	std::cout << PROJECT_VER << '\n';
	std::cout << PROJECT_VER_MAJOR << '.' << PROJECT_VER_MINOR << '.' << PROJECT_VER_PATCH << '\n';
	std::cout << '\n';
#endif

	return 0;
}
