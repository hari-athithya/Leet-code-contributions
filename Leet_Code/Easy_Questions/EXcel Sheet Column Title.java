class Solution {
    public String convertToTitle(int num) {
        StringBuilder res=new StringBuilder();
        while(num>0){
             num--;
             res.insert(0,(char) ((num%26) + 'A'));
             num/=26;
        }
        return res.toString();
    }
}
