#include "FizzBuzz.h"

std::vector<std::string> FizzBuzz::run() const noexcept {

  auto list = std::vector<std::string>(100);

  for (int i = 0; i < list.size(); ++i)
      list.at(i) = evaluateNumber(i+1);

  return list;
}

std::string FizzBuzz::evaluateNumber(int number) noexcept {
    if (isFizz(number) && isBuzz(number))
        return "fizzbuzz";

    if(isFizz(number))
        return "fizz";

    if(isBuzz(number))
        return "buzz";

    return std::to_string(number);
}

bool FizzBuzz::isFizz(const int number) noexcept {
    return number % 3 == 0;
}

bool FizzBuzz::isBuzz(const int number) noexcept {
    return number % 5 == 0;
}
