void A(int n, int sum) {
    for(int i = 0; i < n * 1000; ++i) {
        for (int j = 0; j < i; ++j) {
            for (int k = n; k > 0; k--) {
                sum++;
            }
        }
    }
}