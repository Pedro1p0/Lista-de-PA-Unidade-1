int main(){
  int X2[4];
  char X1[4];
  float X4[4];
  double X8[4];

for (int i=0;i<4;i++){
    printf("int = %p \n",(X2+i));
}
for (int i=0;i<4;i++){
    printf("char = %p \n",(X1+i));
}
for (int i=0;i<4;i++){
    printf("float = %p \n",(X4+i));
}
for (int i=0;i<4;i++){
    printf("double = %p \n",(X8+i));
}
  return 0;
}
