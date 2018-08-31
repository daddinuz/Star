#if !defined( __cplusplus ) || __cplusplus < 201103L
#   pragma GCC error "A C++11 compiler is required!"
#   error A C++11 compiler is required!
#endif

#include <string>
#include <iostream>

static void star(size_t n);

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " SIZE" << std::endl;
        return 1;
    }

    try {
        star(std::stoull(argv[1]));
    } catch (...) {
        std::cerr << argv[0] << ": Invalid SIZE -- please specify a number greater than or equal to 0" << std::endl;
    }

    return 0;
}

void star(size_t n) {
    std::string tree = "*";
    while (n > 0) {
        std::cout << std::string(--n, ' ') << tree << std::endl;
        tree += "**";
    }
}
