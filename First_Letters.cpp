//working file
#include <iostream>
#include <cctype>

int main() {
  std::cin >> std::noskipws;
  char character;
  bool previous_is_letter = false;
  while (std::cin >> character) {
    bool current_is_letter = std::isalpha(character);
    if (!previous_is_letter && current_is_letter) {
      std::cout << character;
    }
    previous_is_letter = current_is_letter;
  }
  return 0;
