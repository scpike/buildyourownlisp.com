#include <stdio.h>
#define __STDC_FORMAT_MACROS
#include <inttypes.h>

typedef struct {
  float x;
  float y;
} point;

long int add_together(long int x, long int y) {
  long int result = x + y;
  return result;
}

void play_with_while() {
  int i = 100;
  printf("i is: %d\n", i);
  while(i > 0) {
    i -= 1;
  }
  printf("i is: %d\n", i);
}

void play_with_for() {
  for(int j = 0; j < 10; j++) {
    printf("j is: %d\n", j);
  }
}

void play_with_do() {
  int i = 9;
  do
    {
      printf("%d", i);
      i -= 1;
    }
  while(i > 0);
  puts(" --- done doing");
}

void play_with_switch() {
  switch(10){
  case 1 :
    puts("1");
  case 2 :
    puts("2");
  default :
    puts("Other");
  }
}

void play_with_continue() {
  for(int i = 1; i <= 100; i++){
    if ((i % 3 == 0) && (i % 5 == 0)){
      puts("fizzbuzz");
      continue;
    } else if (i % 3 == 0) {
      puts("fizz");
      continue;
    } else if (i % 5 == 0) {
      puts("buzz");
      continue;
    }
    printf("%d\n", i);
  }
}

void play_with_typedef() {
  point p;
  p.x = 0.1;
  p.y = 10.0;

  if (p.x > 10) {
    puts("Greater!");
  } else {
    puts("Smaller");
  }
  printf("%0.2f\n", p.x * p.y);
}


int main(int argc, char** argv) {
  play_with_while();
  play_with_for();
  play_with_do();
  play_with_switch();
  play_with_continue();
  play_with_typedef();
  return 0;
}
