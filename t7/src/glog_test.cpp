#include "GlogWrapper.h"
#include <iostream>
#include <unistd.h>
using namespace std;
int main(int argc, const char* argv[])
{  
  GlogWrapper gh(argv[0]); 
  LOG(INFO)<<"google INFO====================";
  LOG(WARNING)<<"google WARNING";
  LOG(ERROR)<<"google ERROR";
  auto pid = fork();
  if(pid < 0){
    LOG(INFO) << "error at fork" ;
  }else if(pid == 0){
    LOG(INFO) << "child process  INFO" ;
    LOG(WARNING) << "child process  WARNING" ;
  }else{
    LOG(INFO) << "parent process  INFO" ;
    LOG(WARNING) << "parent process  WARNING" ;
  }
  
  cout<<"cmake learning"<<endl;
  return 0;
}
