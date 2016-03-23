#pragma once
#include "message.hh"

namespace eclipse {
namespace messages {

struct FileExist: public Message {
  std::string get_type() const override;

  std::string file_name;
  bool result;
};

}
}

