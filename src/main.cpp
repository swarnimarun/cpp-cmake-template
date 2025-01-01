#include <print>

int main(int argc, char** argv) {
    if (argc <= 1) {
        std::print(stderr, "No argument provided!");
        return -1;
    }
    std::print("Hello, {}\n", argv[1]);
}
