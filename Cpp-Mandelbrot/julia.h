#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>


typedef unsigned long int INDEX;
typedef long double VALUE;
typedef std::complex<long double> MAT_VALUE;

MAT_VALUE mult2( MAT_VALUE a,  MAT_VALUE b);
MAT_VALUE square(MAT_VALUE a);
MAT_VALUE add2( MAT_VALUE a,  MAT_VALUE b);
MAT_VALUE juliamap( MAT_VALUE a,  MAT_VALUE b);

