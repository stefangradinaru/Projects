Ai învățat să folosești matricele în programele tale și ai decis să implementezi un joc simplu. În joc, ai un personaj Max care se plimbă printr-o lume de formă dreptunghiulară, având n linii și m coloane.

El se poate deplasa din căsuța în care se află fie spre stânga, fie spre dreapta, fie în sus sau în jos. Pentru a face lucrurile mai interesante, te-ai gândit să adaugi un grad de siguranță pentru fiecare căsuță din joc, la fel cum în fiecare oraș există zone mai sigure și zone mai puțin sigure. Astfel, personajul tău poate acum să se deplaseze într-o căsuță vecină doar dacă nivelul său de siguranță e mai mare decât cel al căsuței din care vine.

Ai implementat jocul, care atribuie aleator (la întâmplare) un număr întreg fiecărei căsuțe din matrice la pornirea aplicației. Acel număr reprezintă gradul său de siguranță. Max se află în căsuța din colțul stânga sus și vrei să îl faci să se deplaseze în spirală, pornind spre dreapta.

Afișează mesajul DA dacă e posibil ca Max să parcurgă în spirală toate elementele matricei sau NU, în caz contrar.

Date de intrare
De pe prima linie se citesc de la tastatură numerele n și m. De pe următoarele n linii se citesc m numere naturale, reprezentând elementele matricei.

Date de ieșire
Programul va afișa DA în cazul în care Max poate parcurge în spirală toate elementele matricei, iar NU în caz contrar.

Restricții
1 ≤ n, m ≤ 50
1 ≤ fiecare grad de siguranță ≤ 1 000 000 000

Exemplu
Date de intrare:	Date de ieșire:

4 4                     NU
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16	

4 4                     DA
1 2 3 4
14 16 17 5
13 19 18 7
11 10 9 8	