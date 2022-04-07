# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QtCalculation_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QtCalculation_autogen.dir/ParseCache.txt"
  "QtCalculation_autogen"
  )
endif()
