#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <string>
#include <vector>

#include "linux_parser.h"

using std::string;
using std::vector;

class Processor {
 public:
  Processor();
  float Utilization();

 private:
  int prevuser_;
  int prevnice_;
  int prevsystem_;
  int previdle_;
  int previowait_;
  int previrq_;
  int prevsoftirq_;
  int prevsteal_;

  long prev_nonidle_;
  long prev_idle_;
};

#endif