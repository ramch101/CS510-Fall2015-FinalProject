# Summary Documentation

This is a summary of the visualizations that are generated from the julimap and mandelbrot visualizations. There are four files in this directory :-

  - juliaset.pdf
  - mandelbrot.pdf
  - juliaset.jpg
  - mandelbrot.jpg

## Juliaset.pdf & juliaset.jpg
> Command to generate this file : $ python ../plotdata.py juliaset.csv 
### Summary
The pdf visulaztion is generated with 100 data points for the x and y axis to manage the size restrictions on github. The more datapoints that we use to generate the visualization , the better will be the resolution. The lighter points at the outer edge indicate that the absolute value of complex numbers is lower for these data points.In addition the concentration of the most complex numbers is in the center.
The jpg visualization is 1000 data points for x and y axis with a smaller range of values for the x scale. This streches the image.

## Mandelbrot.pdf mandelbrot.jpg
> Command to generate this file : $ python ../plotdata.py mandelbrot.csv 
### Summary
The pdf visualaztion is generated with 100 data points for the x and y axis to manage the size restrictions on github. The more datapoints that we use to generate the visualization , the better will be the resolution. The visualization indicates that the complex numbers are spread equally across the plane. There is concentration of complex numbers at the center of the star like structure but still the plan is spread more than the julia map visualization.
The jpg visualization is 1000 data points for x and y axis with a smaller range of values for the x scale. This streches the image.

## Next Steps
It would be good to genrate additional visulations with diffrent number of data points and complex numbers and understand how the choice of either these variables impacts the end result.





