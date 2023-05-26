#include <iostream>

#include <fmt/core.h>
#include <fmt/format.h>

int main(int argc, char** argv) {
    if (argc <= 1) {
        fmt::print(stderr, "No argument provided!");
        return -1;
    }
    fmt::print("Hello, {}\n", argv[1]);
}
