ADD_EXECUTABLE(boiling-pot boiling-pot.cpp)
TARGET_LINK_LIBRARIES(boiling-pot toolcase-boiling-pot toolcase-base)

ADD_EXECUTABLE(data-logger data-logger.cpp)
TARGET_LINK_LIBRARIES(data-logger toolcase-data-logger toolcase-base)
