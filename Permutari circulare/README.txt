Cerință
Considerăm un șir format din n elemente. Definim următoarele operații astfel:

permutare circulară la stânga: mutarea primului element la sfârșitul șirului 1 2 3 4 -> 2 3 4 1 -> 3 4 1 2
permutare circulară la dreapta: mutarea ultimului element la începutul șirului 1 2 3 4 -> 4 1 2 3 -> 3 4 1 2
Dându-se un șir format din n elemente și două numere k și p, să se permute cu k poziții la dreapta dacă p este -1, respectiv la stânga dacă p este 1.

Date de intrare
Pe prima linie se află 3 numere: n , k și p. Pe următoarea linie se găsesc n numere naturale, reprezentând elementele șirului.

Date de ieșire
Se vor afișa n numere pe o singură linie, separate printr-un spațiu, reprezentând elementele șirului obținut în urma operațiilor de permutare.

Restricții:
1 ≤ n ≤ 1 000 000
0 ≤ k ≤ 1 000 000
Elementele șirului sunt numere naturale cuprinse între 1 și 1 000
p poate avea doar valorile 1 și -1
Exemplu:
Date de intrare:	Date de ieșire:

4 1 -1
1 2 3 4	                4 1 2 3

4 2 1
1 2 3 4	                3 4 1 2