void sieveOfErath(vector<bool> &sieve){
    for (int i=2;i<sieve.size();i++){
        if(!sieve[i])continue;
        for (int j=i;j<sieve.size();j++){
            if(i*j >=sieve.size())break;
            sieve[i*j]=false;
        }
    }
}
