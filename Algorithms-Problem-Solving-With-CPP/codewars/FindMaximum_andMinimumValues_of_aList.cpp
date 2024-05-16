int min(vector<int> list){
    
    int n = list[0];

    for (int& k : list){
        if (n > k){
            n = k;
        }
    }

    return n;
}

int max(vector<int> list){
    
    int n = list[0];

    for (int& k : list){
        if (k > n){
            n = k;
        }
    }

    return n;
}