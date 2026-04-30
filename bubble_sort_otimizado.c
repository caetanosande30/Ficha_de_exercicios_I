void bubbleSortOtimizado(int v[], int n) {
    int i, j, temp, trocou;

    for(i = 0; i < n - 1; i++) {
        trocou = 0;

        for(j = 0; j < n - i - 1; j++) {
            if(v[j] > v[j+1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                trocou = 1;
            }
        }

        if(trocou == 0)
            break;
    }
}
