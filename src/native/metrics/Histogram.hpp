#pragma once

// windows.h defines min and max macros.
#define NOMINMAX
#include <algorithm>
#undef min
#undef max
#undef NOMINMAX

#include <stdint.h>

// #include "tdigest.h"

namespace datadog {
  class Histogram {
    public:
      // Histogram();

      uint64_t min();
      uint64_t max();
      uint64_t sum();
      uint64_t avg();
      uint64_t count();
      uint64_t percentile(double upper_bound);

      void reset();
      void add(uint64_t value);
    private:
      uint64_t min_;
      uint64_t max_;
      uint64_t sum_;
      uint64_t count_;
      // std::shared_ptr<tdigest::td_histogram_t> percentiles_;
  };
}