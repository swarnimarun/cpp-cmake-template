#include <iostream>
#include <fmt/core.h>
#include <fmt/format.h>

int main(int argc, char **argv) {
  if (argc <= 1) {
    std::cerr << "No argument provided!" << std::endl;
    return -1;
  }
  std::cout << fmt::format("Hello, {}\n", argv[1]);
}
