void splitfloat( float x, int *intpart, float *fracpart ){
    float cnt=0,k;
    k=x;
    while(x>=0){
        x-=1;
        cnt++;
    }
    cnt--;
    *intpart=cnt;
    *fracpart=k-cnt;
}
