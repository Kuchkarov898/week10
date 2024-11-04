// Problem 1
//floorFunction
template <typename L>
int floorFunction (L a) {
    return a/1;
}
//ceilingFunction
template <typename D>
int ceilingFunction (D b) {
    if (b==int(b)) {
        return int(b);
    }
    if(b>0) {
        return int (b)+1;
    }
    return b;
}


// Problem 2
//swap_values
template<typename L>
void swap_values(L &x, L &y) {
    x=x+y;
    y=x-y;
    x=x-y;
}

// Problem 3
//multiply
int multiply(int x, int y) {
    if ( y==0) {
        return 0;
    }
    return x+multiply(x,y-1);
}
// Problem 4
//digitSum
int digitSum(int n) {
    int sum=0;
    if (n==0) {
        return 0;
    }
    return n%10+digitSum(n/10);

}

// Problem 5
//decimalToBinary
int decimalToBinary(int num) {
    if (num == 0) {
        return 0;
    }

    return  (num % 2)+10*decimalToBinary(num / 2);
}

// Problem 6
//midValue
template <typename T>
 T midValue( T a,T  b,T  c) {
    if((a>b && a<c) || (a>c && a<b)) {
        return a;
    }

    if ((b>a && b<c) || (b>c && b<a)) {
        return b;
    }
    if ((c>a && c<b) || (c>b && c<a)) {
        return c;
    }


}

#ifndef PROBLEMS_H
#define PROBLEMS_H

#endif //PROBLEMS_H
