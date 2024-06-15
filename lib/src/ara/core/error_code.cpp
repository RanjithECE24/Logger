#include "ara/core/error_code.h"
#include <stdexcept>

namespace ara {
namespace core {
std::string ErrorCode::Message() const noexcept {
  std::string _result(mDomain.Message(mValue));
  return _result;
}

void ErrorCode::ThrowAsException() const {
  std::runtime_error _exception{Message()};
  throw _exception;
}
} // namespace core
} // namespace ara