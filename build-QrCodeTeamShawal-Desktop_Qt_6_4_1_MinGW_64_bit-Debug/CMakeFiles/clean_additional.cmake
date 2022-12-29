# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QrCodeTeamShawal_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QrCodeTeamShawal_autogen.dir\\ParseCache.txt"
  "QrCodeTeamShawal_autogen"
  )
endif()
