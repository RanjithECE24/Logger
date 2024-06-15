#ifndef CONSOLE_LOG_SINK_H
#define CONSOLE_LOG_SINK_H

#include "log_sink.h"
#include <iostream>

namespace ara {
namespace log {
namespace sink {
class ConsoleLogSink : public LogSink {
public:
  /// @brief Constructor
  /// @param appId Application ID
  /// @param appDescription Application description
  ConsoleLogSink(std::string appId, std::string appDescription);

  ConsoleLogSink() = delete;
  void Log(const LogStream &logStream) const override;
};
} // namespace sink
} // namespace log
} // namespace ara

#endif