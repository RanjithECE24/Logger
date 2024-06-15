#include "ara/log/logging_framework.h"
#include "ara/log/sink/console_log_sink.h"
#include "ara/log/sink/log_sink.h"
#include <gtest/gtest.h>

namespace ara {
namespace log {

TEST(LoggingFrameworkTest, FactoryException) {
  const std::string cAppId{"APP01"};
  const LogMode cLogMode{LogMode::kFile};

  ASSERT_THROW(LoggingFramework::Create(cAppId, cLogMode),
               std::invalid_argument);
}

TEST(LoggingFrameworkTest, LogMethod) {
  const std::string cAppId{"APP01"};
  const LogMode cLogMode{LogMode::kConsole};
  const std::string cCtxId{"CTX01"};
  const std::string cCtxDescription{"Default Test Context"};
  const LogLevel cLogLevel{LogLevel::kWarn};

  LoggingFramework *_loggingFramework =
      LoggingFramework::Create(cAppId, cLogMode);

  Logger _logger = _loggingFramework->CreateLogger(cCtxId, cCtxDescription);

  LogStream _logStream;

  ASSERT_NO_THROW(_loggingFramework->Log(_logger, cLogLevel, _logStream));

  delete _loggingFramework;
}
} // namespace log
} // namespace ara