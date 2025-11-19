class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> str = new ArrayList<>();
        Map<String,List<String>> mpstr = new HashMap<>();

        for(int i=0;i<strs.length;i++)
        {
            String s = strs[i].chars().sorted() .collect(StringBuilder::new,StringBuilder::appendCodePoint,StringBuilder::append).toString();
            if(!mpstr.containsKey(s))
            {
                mpstr.put(s, new ArrayList<>());
                mpstr.get(s).add(strs[i]);
            }
            else
            {
            mpstr.get(s).add(strs[i]);
            }
    
        }

        str.addAll(mpstr.values());

        return str;
    }
}