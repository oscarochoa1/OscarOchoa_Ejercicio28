plot.png: solucion.dat imagen.py
    python imagen.py

%.dat : a.out
    ./a.out 

a.out: solucion.cpp
    g++ solucion.cpp