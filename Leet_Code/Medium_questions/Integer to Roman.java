class Solution {
    public String intToRoman(int num) {
        final String[] ones = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        final String[] tens = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        final String[] hrns = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        final String[] ths={"","M","MM","MMM"};
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
}
