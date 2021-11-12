message("== FindGLOG.cmake dir")
FIND_PATH(GLOG_INCLUDE_DIR logging.h /usr/local/include/glog /usr/include/glog)
message("inlcude dir:" ${GLOG_INCLUDE_DIR})
FIND_LIBRARY(GLOG_LIBRARY NAMES glog PATH /usr/lib /usr/local/lib)
message("library dir:" ${GLOG_LIBRARY})
IF (GLOG_INCLUDE_DIR AND GLOG_LIBRARY)
  SET(GLOG_FOUND TRUE)
ENDIF (GLOG_INCLUDE_DIR AND GLOG_LIBRARY)

