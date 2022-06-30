#pragma once

#include <vector>
#include <string>

struct FizzBuzz {

public:
  FizzBuzz() = default;

  std::vector<std::string> run() const noexcept;

private:
  static bool isFizz(int number) noexcept;
  static bool isBuzz(int number) noexcept;
  static std::string evaluateNumber(int number) noexcept;
};
