#pragma once

namespace omega_language {

  enum class TokenKind {
    IDENTIFIER,
    STRING,
    INTEGER,
    FLOAT,
    
    //operators
    SLASH,
    STAR,
    PLUS,
    DASH,
  };
}
