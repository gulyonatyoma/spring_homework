
#include <gtest/gtest.h>

#include "temperature.hpp"

TEST(solve, Simple) {
  ASSERT_EQ(Solve(std::vector<int>{73, 74, 75, 71, 69, 72, 76, 73}),
            (std::vector<int>{1, 1, 4, 2, 1, 1, 0, 0}));

  ASSERT_EQ(Solve(std::vector<int>{3, 14, 1, 2, 17, 11, 6, 14, 2, 16}),
            (std::vector<int>{{1, 3, 1, 1, 0, 2, 1, 2, 1, 0}}));

  ASSERT_EQ(Solve(std::vector<int>{}), (std::vector<int>{}));

  ASSERT_EQ(Solve(std::vector<int>{1}), (std::vector<int>{0}));
}
