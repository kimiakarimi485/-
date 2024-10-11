void H(int n, int sum) {
    for(int k = n; k > 0; k = k / 2) {
        for(int j = n; j > 0; j--) {
            sum++;
        }
    }
    for (int i = 0; i < n; i++) {
        sum++;
    }
}