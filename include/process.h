#ifndef PROCESS_H
#define PROCESS_H

#include <string>

class Process {
 public:
  Process(int pid) : pid_(pid){};

  int Pid();
  std::string User();
  std::string Command();
  float CpuUtilization() const;
  std::string Ram();
  long int UpTime() const;
  bool operator<(Process const& a) const;

 private:
  int pid_{0};
  std::string command_{""};
  float cpuutilization_{0.0};
};

#endif