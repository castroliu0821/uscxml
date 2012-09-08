FIND_PATH(GLOG_INCLUDE_DIR glog/logging.h
  PATH_SUFFIXES include src
  PATHS
  /usr/local
  /usr
  /sw # Fink
  /opt/local # DarwinPorts
  /opt/csw # Blastwave
  /opt
  HINTS $ENV{GLOG_SRC}
)

FIND_LIBRARY(GLOG_LIBRARY
  NAMES glog
  HINTS $ENV{GLOG_SRC}/.libs/
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GLOG DEFAULT_MSG GLOG_LIBRARY GLOG_INCLUDE_DIR)
MARK_AS_ADVANCED(GLOG_LIBRARY GLOG_INCLUDE_DIR)
