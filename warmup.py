import pylab as pyl

def f(x):
	return pyl.arctan(x)

def derfana(x):
	return 1/(1+x**2)

def derf2c(x, h):
	return (f(x+h) - f(x))/h

def derf3c(x, h):
	return (f(x+h) - f(x-h))/(2.*h)


x = pyl.sqrt(2.)
h = 1e-5


print "2-point method: %.6e" % derf2c(x, h)
print "3-point method: %.6e" % derf3c(x, h)

print "relative : %.6e" % (derf2c(x, h)/derf3c(x, h))