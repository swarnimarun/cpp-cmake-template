#include <print>
#include <ranges>

constexpr const int INVALID_ARGUMENTS = 1;

int main(int argc, char** argv) {
    auto first = std::ranges::subrange(argv, argv + argc).advance(1).begin();
    if (*first == nullptr) {
        std::print(stderr, "No arguments passed");
        return INVALID_ARGUMENTS;
    }
    std::print("Hello, {}", *first);
}
