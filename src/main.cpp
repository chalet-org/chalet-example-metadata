#include <iostream>

#include <config.h>

int main(/* const int argc, const char* argv[] */)
{
#if defined(WORKSPACE_VER)
	std::cout << "WORKSPACE_NAME          : " << WORKSPACE_NAME << '\n';
	std::cout << "WORKSPACE_AUTHOR        : " << WORKSPACE_AUTHOR << '\n';
	std::cout << "WORKSPACE_DESCRIPTION   : " << WORKSPACE_DESCRIPTION << '\n';
	std::cout << "WORKSPACE_HOMEPAGE      : " << WORKSPACE_HOMEPAGE << '\n';
	std::cout << "WORKSPACE_LICENSE       : " << WORKSPACE_LICENSE << '\n';
	std::cout << "WORKSPACE_README        : " << WORKSPACE_README << '\n';
	std::cout << "WORKSPACE_VER           : " << WORKSPACE_VER << '\n';
	std::cout << "WORKSPACE_VER (parsed)  : " << WORKSPACE_VER_MAJOR << '.' << WORKSPACE_VER_MINOR << '.' << WORKSPACE_VER_PATCH << '\n';
	std::cout << '\n';
#endif

#if defined(PROJECT_VER)
	std::cout << "PROJECT_NAME            : " << PROJECT_NAME << '\n';
	std::cout << "PROJECT_AUTHOR          : " << PROJECT_AUTHOR << '\n';
	std::cout << "PROJECT_DESCRIPTION     : " << PROJECT_DESCRIPTION << '\n';
	std::cout << "PROJECT_HOMEPAGE        : " << PROJECT_HOMEPAGE << '\n';
	std::cout << "PROJECT_LICENSE         : " << PROJECT_LICENSE << '\n';
	std::cout << "PROJECT_README          : " << PROJECT_README << '\n';
	std::cout << "PROJECT_VER             : " << PROJECT_VER << '\n';
	std::cout << "PROJECT_VER (parsed)    : " << PROJECT_VER_MAJOR << '.' << PROJECT_VER_MINOR << '.' << PROJECT_VER_PATCH << '\n';
	// std::cout << '\n';
#endif

	return 0;
}
