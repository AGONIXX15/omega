#pragma once

#include <cstddef>

namespace omega_language {

struct Position {
  size_t line = 0;
  size_t column = 0;
  size_t pos = 0;
};
} // namespace omega_language
