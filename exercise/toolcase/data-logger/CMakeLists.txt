ADD_LIBRARY(
  toolcase-data-logger

  data-logger.cpp
  data-logger.h
  sensor-config.h
  sensor-values.h
  sink-file.h
  sink-logger.h
  sink-mock.h
  sink-terminal.h
)
TARGET_INCLUDE_DIRECTORIES(toolcase-data-logger PUBLIC .)

TARGET_LINK_LIBRARIES(toolcase-data-logger toolcase-base)
