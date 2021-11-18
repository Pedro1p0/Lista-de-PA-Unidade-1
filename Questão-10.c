int main(){
  int X2[4] ={10,20,30,40};
  char X1[4] = {"halo"};
  float X4[4] ={10.0,20.0,30.0,40.0};
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
