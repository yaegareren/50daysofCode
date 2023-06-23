class solution {
  public: 
    double myPow (double x, int n) {

        if (n == 0) return 1; 
        if (n == -1) return 1/x ;

        double temp = myPow(x, n/2);

        if (n % 2 == 0) return temp*temp;  // if n is even,  eg. 2^10 =  2^5 * 2^5

        if (n > 0) return temp*temp*x; // if n is odd,  eg. 2^ 5 = 2^2 * 2^2 * 2
        return temp*temp*(1/x); 
    }
};

// time complexity: O(log n)