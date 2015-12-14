# This program is used to plot the visualizations for julimap and mandelbrot datasets

#Load the packages
import pandas as pd
import numpy as np
import matplotlib
import matplotlib.pyplot as plt
import sys, getopt
from matplotlib.backends.backend_pdf import PdfPages
from math import sqrt
import os

# check to make sure the right parameters are passed to the program
def main(argv):
   if len(sys.argv) != 2:
      print 'USAGE :plot_data.py <inputfilename.csv>'
      sys.exit(2)
# Display the input and output file
data_file = sys.argv[1]
print 'Input file is "', data_file
file_name=os.path.splitext(os.path.basename(data_file))[0]+'.pdf'
print 'Ouput filename is  "', file_name

if __name__ == "__main__":
   main(sys.argv[1:])

# Load the csv file to a panda data frame
data_df = pd.read_csv(data_file, header=None)

# Reshape data to a 2d plane
dim = int(sqrt(len(data_df[2])))
X= np.linspace(min(data_df[0].values),max(data_df[0].values),dim) 
Y= np.linspace(min(data_df[1].values),max(data_df[1].values),dim) 
Z=np.reshape(data_df[2],(dim,dim)).T

# Plot the graph
with PdfPages(file_name) as pdf:
#	plt.scatter(data_df[0].values, data_df[1].values, s=data_df[2].values,cmap=plt.cm.hot)
        plt.pcolormesh(X,Y,Z,cmap=plt.cm.hot)
        plt.title('Visualization of data in 2D')
        plt.colorbar()
	pdf.savefig()  # saves the current figure into a pdf page
	plt.close()

