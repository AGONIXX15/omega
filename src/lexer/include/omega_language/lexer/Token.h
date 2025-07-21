#pragma once
#include <string>
#include <omega_language/lexer/Position.h>
#include <omega_language/lexer/TokenKind.h>


namespace omega_language {
  
  struct Token {
  std::string value;
  TokenKind kind;
  Position start;
  Position end;
    Token(const std::string& value, const TokenKind kind,const Position start, const Position end);
  };
}
