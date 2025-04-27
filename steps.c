int steps(int num){
    int steps=0;
    while(!Palindrome(num)){
        num+=reverse_int(num);
        steps++;
    }return steps;
}
