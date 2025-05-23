int maxProfit(int* prices, int pricesSize) {
    int minprice=prices[0];
    int maxprofit=0;
    for(int i=1;i<pricesSize;++i){
        if(prices[i]<minprice){
            minprice=prices[i];
        }else if(prices[i]-minprice>maxprofit){
            maxprofit=prices[i]-minprice;
        }
    }return maxprofit;
}
