#include "PmergeMe.hpp"
int main(int argc, char **argv)
{
  if(argc != 1)
  {
    PmergeMe t(argv);
    t.sort();
  }
  return 0;
}