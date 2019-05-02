    
import os
import numpy as np
import matplotlib.pyplot as plt

a = os.system("g++ solucion.cpp -o solucion.x")
a = os.system("./solucion.x > solucion.dat")

plt.figure()
data = np.loadtxt("solucion.dat")
plt.plot(data)
plt.savefig("imagen.png")