#pragma once
#include <cstddef>
#include <expected>
#include <string>
#include <vector>
#include <omega_language/lexer/Token.h>

namespace omega_language {

class Lexer {
public:
  size_t pos;
  std::string file_content;
  Lexer(const std::string &file_content, size_t pos = 0);
  std::expected<std::vector<Token>, std::string_view> tokenize();
};
} // namespace omega_language
