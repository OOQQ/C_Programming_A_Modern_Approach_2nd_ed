/*
C Programming: A modern approach 2ed.
091 | Pag 180 | Chapter 8 | Programming Project 010 | 091_prgPrjct010.c
by: OOQQ
=======================================
Modify program 037 from Chapter 5, so that the departure times are stored in an array and the arrival times are stored in a second array.
*/

#include <stdio.h>

#define N 8

int main(void)
{
  int i, a, b, current_time;
  int departures[N] = {480, 583, 679, 767, 840, 945, 1140, 1305};
  int arrivals[N] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

  int buffer_hours_depart, buffer_hours_arriv;
  float floating, buffer_mins_depart, buffer_mins_arriv;

  printf ("Enter the time:");
  scanf ("%d:%d", &a, &b);

  current_time = (a * 60) + b;

  for (i = 0; i < N; i++) {
    if (current_time > departures[N - 1]) {
/* calculates min for departure */
      buffer_hours_depart = (departures[0] / 60);
      floating = (departures[0] / 60.0f) - buffer_hours_depart;
      buffer_mins_depart = floating * 60.0f;
/* calculates min for arrival */
      buffer_hours_arriv = (arrivals[0] / 60);
      floating = (arrivals[0] / 60.0f) - buffer_hours_arriv;
      buffer_mins_arriv = floating * 60.0f;
      printf ("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n", (departures[0] / 60), (int) buffer_mins_depart, (arrivals[0] / 60), (int) buffer_mins_arriv);
      break;
    } else if (current_time <= departures[i]) {
/* calculates min for departure */
      buffer_hours_depart = (departures[i] / 60);
      floating = (departures[i] / 60.0f) - buffer_hours_depart;
      buffer_mins_depart = floating * 60.0f;
/* calculates min for arrival */
      buffer_hours_arriv = (arrivals[i] / 60);
      floating = (arrivals[i] / 60.0f) - buffer_hours_arriv;
      buffer_mins_arriv = floating * 60.0f;
      printf ("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n", (departures[i] / 60), (int) buffer_mins_depart, (arrivals[i] / 60), (int) buffer_mins_arriv);
      break;
    }
  }

return 0;
}
