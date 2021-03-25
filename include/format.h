#ifndef FORMAT_H
#define FORMAT_H

#include <string>

namespace Format {
std::string Format(int time);
std::string KBisMB(float kb);
std::string ElapsedTime(long times);  // TODO: See src/format.cpp
};                                    // namespace Format

#endif