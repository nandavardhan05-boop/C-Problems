int isBalanced(char *exp) {
    int count = 0;
    for(int i=0; exp[i]; i++) {
        if(exp[i]=='(') count++;
        if(exp[i]==')') count--;
        if(count < 0) return 0;
    }
    return count == 0;
}
