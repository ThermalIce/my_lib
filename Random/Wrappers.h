#ifndef RAND_WRAP_RPI
#define RAND_WRAP_RPI

#include <vector>
#include <cmath>
#include <set>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

/**
 *@fn template < class T > T get_random_entry ( set < T > values )
 *
 * Retrieve a random entry in a set
 *
 *@param values Set to get random element from
 *
 *@return Random entry in set
 */
template < class T >
T get_random_entry ( set < T > values ){
  typename set < T >::iterator it_s = values.begin();
  int choice = rand() % values.size();

  while ( choice-- ) {
    ++it_s;
  }

  return *it_s;
}

/**
 *@double random_double
 *
 * Wrapper function for getting a random double value
 *
 *@return Random double between 0 and 1 ( inclusive )
 */
double random_double ( );
double random_double ( double min, double max );
int random_int ( int min, int max );

vector < int > get_random_subset ( const vector < int >& values, int elements );
set < int > get_random_subset ( const set < int >& values, int elements );
set < string > get_random_subset ( const set < string >& values, int elements );

#endif
