#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol191;
using namespace std;

/*takeaways
  - basic bitwise operation
*/

int Solution::hammingWeight(uint32_t n)
{
  auto result = 0;
  while (n > 0)
  {
    if (n & 1)
      result++;
    n >>= 1;
  }

  return result;
}