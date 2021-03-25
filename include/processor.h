#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  double Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:
 vector<double> ReadFile();
 void AssignPrevValues(vector<double> newValues);
    double prevuser  = 0.0;
    double prevnice = 0.0;
    double prevsystem = 0.0;
    double previdle = 0.0;
    double previowait = 0.0;
    double previrq = 0.0;
    double prevsoftirq = 0.0;
    double prevsteal = 0.0;

};

#endif