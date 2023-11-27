ADD_LIBRARY(
  toolcase-boiling-pot

  boiling-pot.cpp
  boiling-pot.h
)
TARGET_INCLUDE_DIRECTORIES(toolcase-boiling-pot PUBLIC .)

TARGET_LINK_LIBRARIES(toolcase-boiling-pot toolcase-base)
