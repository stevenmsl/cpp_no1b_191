#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol191;

/*
Input: 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011
 has a total of three '1' bits.
*/
tuple<uint32_t, int>
testFixture1()
{
  auto input = stoul("00000000000000000000000000001011", nullptr, 2);

  return make_tuple(input, 3);
}

/*
Input: 00000000000000000000000010000000
Output: 1
Explanation: The input binary string 00000000000000000000000010000000 has a total of one '1' bit.
*/
tuple<uint32_t, int>
testFixture2()
{
  auto input = stoul("00000000000000000000000010000000", nullptr, 2);

  return make_tuple(input, 1);
}

/*
Input: 11111111111111111111111111111101
Output: 31
Explanation: The input binary string 11111111111111111111111111111101 has a total of thirty one '1' bits.
*/
tuple<uint32_t, int>
testFixture3()
{
  auto input = stoul("11111111111111111111111111111101", nullptr, 2);

  return make_tuple(input, 31);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.hammingWeight(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.hammingWeight(get<0>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.hammingWeight(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}