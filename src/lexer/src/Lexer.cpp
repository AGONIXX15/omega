#include <iostream>
#include <omega_language/lexer/Lexer.h>

namespace omega_language {

Lexer::Lexer(const std::string &file_content, const int pos)
    : file_content(std::move(file_content)), pos(pos) {}

std::expected<std::vector<Token>, std::string_view> tokenize() {
  std::vector<Token> tokens;
  // code stuff

  return tokens;
}

} // namespace omega_language
