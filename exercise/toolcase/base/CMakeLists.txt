ADD_LIBRARY(
  toolcase-base

  display-led-stripe.cpp
  display-led-stripe.h
  hysteresis.cpp
  hysteresis.h
  pwm_controller.cpp
  pwm_controller.h
  sensor-avg.cpp
  sensor-avg.h
  sensor-const.cpp
  sensor-const.h
  sensor-mock.cpp
  sensor-mock.h
  sensor-random.cpp
  sensor-random.h
  sensor-w1.h
  sensor.h
  switch-mock.cpp
  switch-mock.h
  switch.h
  sysfs-switch.cpp
  sysfs-switch.h
)

TARGET_INCLUDE_DIRECTORIES(toolcase-base PUBLIC .)
