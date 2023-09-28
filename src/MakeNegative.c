// Task
// In this simple assignment you are given a number and have to make it negative.
// The number can be negative already, in which case no change is required.
// Zero (0) is not checked for any specific sign. Negative zeros make no mathematical sense.

#include <stdio.h>

int makeNegative(int num)
{
  return num < 0 ? num : -num;
}

int makeNegative(int num)
{
  return -abs(num);
}
