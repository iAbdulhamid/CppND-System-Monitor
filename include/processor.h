#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <string>

#include "linux_parser.h"
class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:
  std::string line;
  std::istringstream linestream;
  std::string s;

  int user, nice, system, idle, iowait, irq, softirq, steal;
  int prevuser, prevnice, prevsystem, previdle, previowait, previrq,
      prevsoftirq, prevsteal;
  int PrevTotal, PrevNonIdle, Idle, NonIdle, PrevIdle, Total;
  int totald, idled, total, nonidle;
};

#endif