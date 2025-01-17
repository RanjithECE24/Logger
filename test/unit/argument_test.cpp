#include "ara/log/argument.h"
#include <gtest/gtest.h>
#include <stdint.h>
#include <utility>

namespace ara {
namespace log {
TEST(LogArgumentTest, ToStringAssertions) {
  std::uint8_t _speed = 50;
  const char *cIdentifier = "speed";
  const char *cUnit = "km/h";

  Argument<uint8_t> _argument(std::move(_speed), cIdentifier, cUnit);
  const std::string _expectedResult = "speed: 50 km/h";
  std::string _actualResult = _argument.ToString();

  // Expect string equality.
  ASSERT_EQ(_expectedResult, _actualResult);
}
} // namespace log
} // namespace ara