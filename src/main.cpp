#include <iostream>
#include <fstream>
#include <omega_language/lexer/Lexer.h>

std::string read_file(std::string path) {
  std::ifstream file_reader;
  file_reader.open(path);
  std::string buffer;
  while(!file_reader.eof()) {
    buffer.push_back(file_reader.get());
  }

  return std::move(buffer);
}

int main(int argc, const char *argv[]) {
  // omega::Lexer lexer;

  if(argc >= 2) {
    std::string buffer = read_file(argv[1]);
    omega_language::Lexer lex(buffer);
  }
  
  
  return 0;
}
