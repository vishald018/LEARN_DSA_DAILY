bool f(int i, string &s){
    if( i > s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;


}