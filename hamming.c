bool isHappy(int n) {
    int slow=n;
    int fast=n;
    while(fast!=1 && getsum(fast)!=1){
        slow=getsum(slow);
        fast=getsum(getsum(fast));

        if(fast==slow){
            return false;
        }

    }return true;
}
