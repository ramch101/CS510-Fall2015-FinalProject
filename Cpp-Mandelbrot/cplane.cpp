#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
#include "cplane.hpp"

using namespace boost::numeric::ublas;
using std::cout; using std::endl;

MAT_TYPE CPLANE::set_matrix( VALUE xmin_v, VALUE xmax_v, VALUE ymin_v, VALUE ymax_v, INDEX xpoints_v, INDEX ypoints_v) {
  INDEX rows, cols;
  VALUE x,y;
  VALUE col_inc = ((xmax_v - xmin_v)+1)/ xpoints_v;
  VALUE row_inc = ((ymax_v - ymin_v)+1)/ ypoints_v;
  xmin = xmin_v;
  xmax = xmax_v;
  ymin = ymin_v;
  ymax = ymax_v;
  xpoints = xpoints_v;
  ypoints = ypoints_v;
  MAT_TYPE mat(xpoints,ypoints);

// set the values in the matrix
  for(rows=0; rows<ypoints; rows++) {
    for(cols=0; cols<xpoints; cols++) {
      x = xmin + cols*col_inc;
      y = ymin + rows*row_inc;
      mat(rows,cols) = x + y*1i;
     }
  }
  return(mat);
};

MAT_VALUE CPLANE::get_value(MAT_TYPE mat_v, INDEX row_v, INDEX col_v) {
        MAT_VALUE temp;
	temp = mat_v(row_v,col_v);
        return(temp);
};

void CPLANE::print_matrix(MAT_TYPE mat_v) {
	cout << " Matrix mat:" << endl;
        cout << mat_v << endl;
};
