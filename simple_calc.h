#ifndef CALC_H
#define CALC_H

#define ZERO_DIV 0


enum MenuOptions {
    SUM = 1,
    SUB,
    MUL,
    DIV,
    REWRITE_NUMS,
    EXIT

};


int sum(int, int);
int sub(int, int);
int div(int, int);
int mul(int, int);


#endif
