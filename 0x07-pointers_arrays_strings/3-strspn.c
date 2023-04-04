unsigned int _strspn(char *s, char *accept) {
unsigned int i, y, count = 0;
for (i = 0; s[i]; i++) {
printf("loop s[%d]: %c \n",i,s[i]);
for (y = 0; accept[y]; y++) {
printf("loop accept[%d]: %c \n",y,accept[y]);
if (s[i] == accept[y]) {
printf("s[%d] = accept[%d]: %c = %c\n",i,y,s[i],accept[y]);
count++;
printf("count: %d \n",count);
break;
}
}
if (accept[y] == '\0'){
printf("accept[%d]: %c exit loops return 0: %d \n",y, accept[y]);
break;}
}
return (count);
}
