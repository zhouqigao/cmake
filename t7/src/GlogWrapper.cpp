#include <stdlib.h>
#include "GlogWrapper.h"
#define LOGDIR "../log"
#define MKDIR "mkdir -p " LOGDIR

//GLOG配置：
GlogWrapper::GlogWrapper(const char* program)
{
  system(MKDIR);
  google::InitGoogleLogging(program);
  google::SetStderrLogging(google::INFO); //设置级别高于 google::INFO 的日志同时输出到屏幕
  FLAGS_colorlogtostderr=true;    //设置输出到屏幕的日志显示相应颜色

  for (google::LogSeverity s = google::WARNING; 
    s < google::NUM_SEVERITIES; s++){
    google::SetLogDestination(s, "");
  }
  google::SetLogDestination(google::INFO, LOGDIR"/INFO_");
  FLAGS_logbufsecs =0;        //缓冲日志输出，默认为30秒，此处改为立即输出
  FLAGS_max_log_size =100;  //最大日志大小为 100MB
  FLAGS_stop_logging_if_full_disk = true;     //当磁盘被写满时，停止日志输出
}
//GLOG内存清理：
GlogWrapper::~GlogWrapper()
{
  google::ShutdownGoogleLogging();
}