//
//  main.cpp
//  CPP-PRG-09-05-Pointer-Rewrite
//
//  Created by Keith Smith on 10/30/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The following function uses reference variables as parameters. Rewrite the function
//  so it uses pointers instead of reference variables, then demonstrate the function in a
//  complete program.
//
//  int doSomething(int &x, int &y)
//  {
//      int temp = x;
//      x = y * 10;
//      y = temp * 10;
//      return x + y;
//  }

#include <iostream>

using namespace std;

int doSomething(int *, int *);

int main()
{
    int intVal1 = 5;
    int intVal2 = 10;
    int intVal3;
    
    intVal3 = doSomething(&intVal1, &intVal2);
    
    cout << intVal3 << endl;
    
    return 0;
}

int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}
