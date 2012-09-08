FIND_PATH(EVENT_INCLUDE_DIR event2/event.h
  PATH_SUFFIXES include
  PATHS
  /usr/local
  /usr
  /sw # Fink
  /opt/local # DarwinPorts
  /opt/csw # Blastwave
  /opt
  HINTS $ENV{EVENT_SRC}
)

FIND_LIBRARY(EVENT_LIBRARY
  NAMES event
  HINTS $ENV{EVENT_SRC}/.libs/
)

if (NOT WIN32)
	FIND_LIBRARY(EVENT_LIBRARY_THREADS
	  NAMES event_pthreads
	  HINTS $ENV{EVENT_SRC}/.libs/
	)
else()
	FIND_LIBRARY(EVENT_LIBRARY_THREADS
	  NAMES event_pthreads
	  HINTS $ENV{EVENT_SRC}/.libs/
	)
endif()

list (APPEND EVENT_LIBRARY ${EVENT_LIBRARY_THREADS})

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(EVENT DEFAULT_MSG EVENT_LIBRARY EVENT_INCLUDE_DIR)
MARK_AS_ADVANCED(EVENT_LIBRARY EVENT_INCLUDE_DIR)
